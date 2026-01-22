# Dasar Pemrograman
## 1. OOP
### i. Konsep Dasar OOP
Contoh: 
/src/b/daspro/nomor1/daspro_*.cpp

1. class
Diibaratkan sebuah template untuk mendefinisikan sebuah atribut dan/atau objek dari sebuah entity

2. object
Instance atau implementasi dari sebuah class. Jika classnya adalah resep, maka object bisa berupa kue

3. abstraction
Sebuah konsep dalam proses membuat sebuah class yang "general" dan nantinya diimplementasikan lebih detil dengan class lainnya

4. encapsulation
Konsep pembungkusan dari sebuah class atau metode

5. inheritance
Konsep di mana sebuah class dapat mewarisi atribut dan metode dari class lain

6. polymorphism
Ini konsep memungkinkan objek dari class lain bisa melakukan atribut atau menjadi sebuah objek lain namun tetap dari parent class yang sama

### ii. Refactor Code
Untuk kasus telemetry ini saya merasa Observer Pattern cocok, karena berdasarkan dari codenya, terdapat sebuah fungsi untuk alerting dan juga stats. Dengan design pattern Observer saya merasa akan lebih fleksibel apabila memang nantinya memerlukan method baru. Untuk refactor code yang telah saya terapkan pula dengan Open and/or Closed Principle terdapat di /src/b/daspro/nomor2/telemetry_processor_refact.cpp

Konsep refactoring yang saya terapkan adalah:
1. Mengubah struct data diganti menjadi class TelemetryData dengan method getter
2. Memisahkan tugas antara membaca, mengecek alert, dan stats
3. Membuat interface ITelemetryListener untuk antara processor dan listener

## 2. Bahasa C++
### i. Apa itu #include <file_name> dan #include "file_name" serta perbedaan antara keduanya
#include <...> digunakan untuk import library bawaan compiler, sedangkan #include "..." digunakan untuk import file header lokal yang kita buat sendiri dalam folder project. Bedanya hanya pada urutan prioritas lokasi pencarian file oleh compiler.

### ii. Penggunaan #ifdef, #ifndef, #endif dan #pragma once dalam header file
Kedua cara tersebut digunakan untuk mencegah multiple inclusion pada header file.

### iii.Penggunaan namespace dan scope resolution operator (::)
Namespace berguna mengelompokkan kode agar nama fungsi/variabel tidak bentrok dengan library lain, sedangkan operator :: digunakan untuk mengakses isi spesifik dari kelompok tersebut (misalnya std::cout). Ini sangat penting di project besar biar kita tahu asal fungsi itu dari modul mana.

### iv. Perbedaan #define dan using
#define hanya mekanisme find-and-replace teks kasar sebelum compile yang rawan bug, sedangkan using menciptakan tipe data yang dipahami oleh compiler sehingga lebih aman.

### v. Cara kerja pointer (*) dan address of (&)
Operator & digunakan untuk mendapatkan alamat memori fisik dari suatu variabel, sedangkan * digunakan untuk mengakses atau memanipulasi nilai data yang tersimpan di alamat memori tersebut.

### vi. Konsep pass by value dan pass by reference dalam definisi variabel dan fungsi
Pass by value adalah mengirimkan nilai variabel ke dalam fungsi, sedangkan pass by reference adalah mengirimkan alamat memori variabel ke dalam fungsi.

### vii. Perbedaan std::unique_ptr dan std::shared_ptr 
std::unique_ptr adalah pointer yang hanya dapat memiliki satu owner, sedangkan std::shared_ptr adalah pointer yang dapat memiliki banyak owner.

## 3. Multithreading
Multithreading itu simpelnya adalah kemampuan CPU untuk mengerjakan beberapa tugas secara bersamaan dalam satu program yang sama. Tujuannya supaya program tidak freeze atau lag saat satu tugas sedang berat atau harus menunggu, tugas lain tetap bisa jalan.

Untuk simulasi kode multithreading sudah saya siapkan dan terletak di folder /src/b/daspro/nomor3/multithreading_sim.cpp

## 4. Header file & DOXYGEN
### i. Perbedaan cara pendefinisian kedua header file (this number is answered by AI, btw >w<>)
Berdasarkan kedua file yang diberikan (vision_to_mavros.hpp dan pipeline_parser.hpp), terdapat beberapa perbedaan fundamental dalam cara pendefinisiannya, mulai dari preprocessor directives hingga struktur arsitektur kodenya.

Berikut adalah rincian perbedaannya:
A. Include Guards (Pelindung Header)
    vision_to_mavros.hpp: Menggunakan Standard Include Guards (#ifndef VISION_TO_MAVROS_H, #define ..., #endif).
        Karakteristik: Ini adalah cara standar C/C++ yang dijamin portabel di semua compiler. Namun, rentan terhadap name collision jika ada macro dengan nama yang sama di file lain.
    pipeline_parser.hpp: Menggunakan #pragma once.
        Karakteristik: Ini adalah fitur non-standar (meski didukung luas oleh compiler modern) yang lebih ringkas. Compiler hanya perlu memproses file sekali, yang berpotensi mempercepat waktu kompilasi (kaitan dengan efisiensi kompilasi).
B. Namespace (Ruang Lingkup Nama)
    vision_to_mavros.hpp: Mendefinisikan kelas langsung di Global Namespace.
        Dampak: Kelas VisionToMavros dapat diakses langsung tanpa prefix. Ini kurang disarankan dalam proyek besar karena risiko tabrakan nama (naming conflict) dengan library lain sangat tinggi.
    pipeline_parser.hpp: Membungkus definisi di dalam Namespace uav_vision.
        Dampak: Ini menunjukkan praktik enkapsulasi yang lebih baik. Untuk mengakses kelas, pengguna harus menggunakan uav_vision::PipelineParser. Ini memodularisasi kode dan mencegah polusi pada global namespace.
C. Ketergantungan (Dependencies) & Arsitektur
    vision_to_mavros.hpp: Sangat bergantung pada Framework Eksternal (ROS 2).
        Kelas ini mewarisi (inheritance) dari rclcpp::Node. Ini menjadikannya "Active Object" yang terikat erat dengan sistem ROS. Header yang di-include sangat spesifik pada implementasi robotika.
    pipeline_parser.hpp: Bergantung pada Standard Library (STL).
        Kelas ini bersifat standalone (berdiri sendiri) dan tidak mewarisi dari apapun. Ini adalah utility class murni C++ yang lebih portabel dan mudah diuji (unit testing) karena minim ketergantungan eksternal.
D. Kaitannya dengan Soal Nomor 2 (Asumsi)
Jika soal nomor 2 membahas tentang Modularitas, Manajemen Memori/Kompilasi, atau Best Practice C++, maka:
    Penggunaan #pragma once dan namespace pada pipeline_parser.hpp adalah contoh penerapan struktur C++ modern yang lebih efisien dan aman.
    Sebaliknya, vision_to_mavros.hpp menunjukkan implementasi spesifik aplikasi (robotika) yang mengorbankan portabilitas demi fungsionalitas framework.

### ii. Dokumemtasi DOXYGEN
src/b/daspro/nomor4/*

# Firmware dan Sistem Benam
### i. Definisi dasar firmware
Firmware ibarat "insting" dasar yang tertanam permanen di chip untuk mengontrol fisik hardware secara langsung, berbeda dengan software biasa yang berjalan di atas OS untuk interaksi pengguna. Dalam UAV, firmware berperan sebagai otak utama pada Flight Controller (seperti ArduPilot) yang menerjemahkan data sensor mentah menjadi perintah motor agar drone bisa terbang stabil dan tidak jatuh.

### ii.  Konsep Real-Time Operating System
RTOS (Real-Time Operating System) adalah sistem operasi yang menjamin setiap tugas dieksekusi tepat waktu tanpa penundaan (no lag), dengan memprioritaskan tugas yang paling kritis. Ini wajib ada di UAV karena proses penyeimbangan pesawat harus terjadi ratusan kali per detik; jika sistem terlambat merespons sensor walau hanya sekian milidetik, drone bisa kehilangan kendali dan jatuh.

### iii. Konsep dasar komunikasi serial 
Ini adalah protokol "bahasa" komunikasi antar komponen: UART biasanya dipakai untuk koneksi GPS dan Telemetri, I2C untuk sensor hemat kabel seperti kompas, dan SPI untuk transfer data super cepat seperti sensor gerak (IMU). Ketiganya bekerja bersamaan agar Flight Controller bisa mengumpulkan semua data lingkungan dan mengendalikan periferal secara sinkron.