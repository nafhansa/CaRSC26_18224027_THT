/**
 * @file vision_to_mavros.hpp
 * @brief Header file untuk node penghubung data visi komputer ke kontroler penerbangan MAVROS.
 * @details File ini mendefinisikan kelas VisionToMavros yang bertugas mengubah estimasi pose
 * visual menjadi pesan MAVLink yang dapat dimengerti oleh autopilot via MAVROS.
 */

#ifndef VISION_TO_MAVROS_H
#define VISION_TO_MAVROS_H

#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/create_timer_ros.h>
#include <tf2/convert.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Vector3.h>
#include <geometry_msgs/msg/vector3.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav_msgs/msg/path.hpp>
#include <mavros_msgs/msg/landing_target.hpp>
#include <string>

/**
 * @class VisionToMavros
 * @brief Node ROS 2 yang menangani transformasi koordinat visual ke MAVROS.
 * * Kelas ini mewarisi rclcpp::Node dan bertanggung jawab untuk mendengarkan transformasi TF,
 * mengonversinya ke frame badan pesawat (body frame), dan mempublikasikan estimasi posisi
 * atau target pendaratan presisi ke topik MAVROS.
 */
class VisionToMavros : public rclcpp::Node {
    public:
        /**
         * @brief Konstruktor default untuk VisionToMavros.
         * @details Menginisialisasi parameter node, subscriber, publisher, dan buffer TF.
         */
        VisionToMavros();

        /**
         * @brief Destruktor kelas.
         */
        ~VisionToMavros() {}

        /**
         * @brief Fungsi loop utama.
         * @details Dijalankan untuk memulai pemrosesan data visi secara berkala.
         */
        void run(void);

    private:
        /**
         * @brief Memuat parameter navigasi dari parameter server ROS.
         */
        void navigationParameters(void);

        /**
         * @brief Memuat parameter untuk pendaratan presisi (Precision Landing).
         */
        void precisionLandParameters(void);

        /**
         * @brief Callback yang dipanggil ketika transformasi TF telah tersedia.
         * @param future Shared future yang berisi hasil transformasi.
         */
        void transformReady(const std::shared_future<geometry_msgs::msg::TransformStamped>&);

        /**
         * @brief Menunggu transformasi pertama tersedia sebelum memulai loop utama.
         * @param timeout Durasi waktu tunggu maksimum dalam detik.
         * @return true Jika transformasi diterima dalam batas waktu.
         * @return false Jika waktu habis (timeout).
         */
        bool waitForFirstTransform(double);

        /**
         * @brief Mempublikasikan estimasi posisi visual ke MAVROS.
         * @details Melakukan perhitungan rotasi dan translasi akhir sebelum publikasi.
         */
        void publishVisionPositionEstimate();

        // --- Publishers ---
        
        /** @brief Publisher untuk data posisi kamera (PoseStamped). */
        rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr camera_pose_publisher; 
        
        /** @brief Publisher untuk visualisasi jalur (path) robot di Rviz. */
        rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr body_path_publisher;
        
        /** @brief Publisher untuk pesan target pendaratan (LandingTarget) ke MAVROS. */
        rclcpp::Publisher<mavros_msgs::msg::LandingTarget>::SharedPtr precland_msg_publisher;

        // --- TF Handling ---

        /** @brief Buffer untuk menyimpan riwayat transformasi koordinat. */
        std::shared_ptr<tf2_ros::Buffer> buffer;
        
        /** @brief Listener untuk mendengarkan perubahan transformasi TF. */
        std::shared_ptr<tf2_ros::TransformListener> transform_listener;

        // --- Data Members ---

        /** @brief Data transformasi terakhir yang diterima. */
        geometry_msgs::msg::TransformStamped transform_stamped;
        
        /** @brief Vektor posisi dalam frame original dan frame body. */
        tf2::Vector3 position_orig, position_body;
        
        /** @brief Quaternion untuk berbagai rotasi frame (kamera ke body, rotasi Z, dll). */
        tf2::Quaternion quat_cam, quat_cam_to_body_x, quat_cam_to_body_y, quat_cam_to_body_z, quat_rot_z, quat_body;
        
        /** @brief Pesan pose yang siap dipublikasikan. */
        geometry_msgs::msg::PoseStamped msg_body_pose;
        
        /** @brief Pesan path untuk visualisasi jejak pergerakan. */
        nav_msgs::msg::Path body_path;

        /** @brief Timer untuk mengontrol frekuensi publikasi data. */
        rclcpp::TimerBase::SharedPtr timer;
        
        /** @brief Waktu terakhir data TF diterima. */
        rclcpp::Time last_tf_time;

        // --- Configuration Parameters ---

        std::string target_frame_id;          /**< ID Frame target (biasanya base_link/body). */
        std::string source_frame_id;          /**< ID Frame sumber (kamera visual odometry). */
        std::string precland_target_frame_id; /**< ID Frame target khusus pendaratan presisi. */
        std::string precland_camera_frame_id; /**< ID Frame kamera khusus pendaratan presisi. */

        double output_rate; /**< Frekuensi output data (Hz). */
        double gamma_world; /**< Faktor koreksi rotasi dunia (jika diperlukan alignment manual). */
        double roll_cam;    /**< Offset roll kamera statis. */
        double pitch_cam;   /**< Offset pitch kamera statis. */
        double yaw_cam;     /**< Offset yaw kamera statis. */
        bool enable_precland; /**< Flag untuk mengaktifkan mode pendaratan presisi. */
};

#endif // VISION_TO_MAVROS_H