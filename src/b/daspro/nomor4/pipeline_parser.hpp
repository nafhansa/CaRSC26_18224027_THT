/**
 * @file pipeline_parser.hpp
 * @brief Header file untuk mem-parsing konfigurasi pipeline visi komputer.
 * @details File ini menyediakan fungsionalitas untuk membaca file konfigurasi atau string
 * yang mendefinisikan urutan proses (pipeline) visi pada UAV.
 */

#pragma once

#include "common_types.hpp"
#include <string>
#include <vector>

namespace uav_vision {

  /**
   * @class PipelineParser
   * @brief Kelas utilitas untuk memvalidasi dan mem-parsing struktur pipeline.
   * * Kelas ini membaca definisi pipeline dari file atau string teks dan mengubahnya
   * menjadi vektor objek PipelineNode yang terstruktur. Juga menangani validasi parameter.
   */
  class PipelineParser {
    public:
      /**
       * @brief Konstruktor default.
       */
      PipelineParser() = default;

      /**
       * @brief Destruktor default.
       */
      ~PipelineParser() = default;

      /**
       * @brief Membaca konfigurasi pipeline dari sebuah file.
       * * @param filename Path absolut atau relatif ke file konfigurasi.
       * @param[out] nodes Referensi ke vektor di mana hasil parsing (PipelineNode) akan disimpan.
       * @return true Jika file berhasil dibuka dan diparsing tanpa error.
       * @return false Jika file tidak ditemukan atau format salah.
       */
      bool parsePipelineFile(const std::string &filename, std::vector<PipelineNode> &nodes);

      /**
       * @brief Membaca konfigurasi pipeline dari string teks mentah.
       * * @param pipelineText String yang berisi definisi pipeline lengkap.
       * @param[out] nodes Referensi ke vektor di mana hasil parsing (PipelineNode) akan disimpan.
       * @return true Jika string berhasil diparsing.
       * @return false Jika format string tidak valid.
       */
      bool parsePipelineString(const std::string &pipelineText, std::vector<PipelineNode> &nodes);

      /**
       * @brief Memvalidasi logika urutan pipeline.
       * @details Memeriksa apakah urutan node logis (misalnya: input node tersedia).
       * * @param nodes Vektor node yang sudah diparsing yang akan divalidasi.
       * @return true Jika pipeline valid dan siap dieksekusi.
       * @return false Jika ditemukan kesalahan logika dalam pipeline.
       */
      bool validatePipeline(const std::vector<PipelineNode> &nodes);

    private:
      /**
       * @brief Mem-parsing satu baris konfigurasi menjadi satu objek PipelineNode.
       * @param line String baris tunggal dari konfigurasi.
       * @param[out] node Objek node tujuan penyimpanan data.
       * @return true Jika baris valid.
       */
      bool parsePipelineNode(const std::string &line, PipelineNode &node);

      /**
       * @brief Mengurai string parameter menjadi struktur PipelineParams.
       * @param paramStr String yang berisi parameter (misal: "ksize=3, sigma=1.5").
       * @return Objek PipelineParams yang telah terisi.
       */
      PipelineParams parseParameters(const std::string &paramStr);

      /**
       * @brief Mengurai daftar frame yang terlibat.
       * @param frameStr String daftar frame.
       * @return Vektor string berisi nama-nama frame.
       */
      std::vector<std::string> parseFrameList(const std::string &frameStr);

      /**
       * @brief Mendeteksi apakah ada ketergantungan melingkar (circular dependency) antar node.
       * @param nodes Daftar node yang akan diperiksa.
       * @return true Jika ditemukan siklus (error).
       * @return false Jika struktur dependensi aman (DAG).
       */
      bool detectCircularDependency(const std::vector<PipelineNode> &nodes);

      // --- Helper Functions ---

      /**
       * @brief Menghapus spasi putih (whitespace) di awal dan akhir string.
       * @param str String input.
       * @return String hasil pemangkasan.
       */
      std::string trim(const std::string &str);

      /**
       * @brief Memecah string berdasarkan delimiter tertentu.
       * @param str String input.
       * @param delimiter Karakter pemisah.
       * @return Vektor token string hasil pecahan.
       */
      std::vector<std::string> split(const std::string &str, char delimiter);

      /**
       * @brief Memeriksa apakah string hanya berisi angka.
       * @param str String input.
       * @return true Jika numerik.
       */
      bool isNumeric(const std::string &str);

      /**
       * @brief Memeriksa apakah string merupakan representasi angka floating point.
       * @param str String input.
       * @return true Jika format float valid.
       */
      bool isFloat(const std::string &str);
  };
} // namespace uav_vision