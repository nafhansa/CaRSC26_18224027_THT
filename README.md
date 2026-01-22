# 🚁 Take Home Test - Robotics Software Control Aksantara ITB 2026

[![Progress](https://img.shields.io/badge/Bagian%20A-✅%20Completed-success)](docs/jawaban-a.md)
[![Progress](https://img.shields.io/badge/Bagian%20B-🔄%20Partially%20Completed-yellow)](docs/jawaban-b.md)
[![Status](https://img.shields.io/badge/Status-Submitted-blue)]()

---

## 👨‍💻 Tentang Pengerjaan

Repository ini berisi pengerjaan **Take Home Test (THT)** untuk Calon Anggota Departemen Robotics Software Control Aksantara ITB 2026. THT ini mencakup berbagai topik mulai dari dasar-dasar UAV, pemrograman C++, hingga firmware & embedded systems.

### 📊 Status Pengerjaan

| Bagian | Status | Progres | Keterangan |
|--------|--------|---------|------------|
| **Bagian A** | ✅ Selesai | 6/6 | Dasar teori & persiapan lingkungan |
| **Bagian B - Dasar Pemrograman** | ✅ Selesai | 4/4 | OOP, C++, Multithreading, Doxygen |
| **Bagian B - Firmware** | ✅ Selesai | 3/3 | Firmware, RTOS, Serial Communication |
| **Bagian B - ConCept** | ⏭️ Skipped | 0/6 | ROS2, Computer Vision, OpenCV |
| **Bagian B - GCS** | ⏭️ Skipped | 0/5 | MAVLink, Docker, Web Development |
| **Log Progres** | ✅ Selesai | - | Dokumentasi perjalanan pengerjaan |

### 🎯 Highlights

**✨ Bagian A - Foundation (100% Complete)**
- ✅ Setup development environment (Ubuntu WSL, ROS2 Humble, QGroundControl)
- ✅ Git & GitHub mastery (branching, SSH, version control)
- ✅ GCS mission planning dengan QGroundControl
- ✅ Pemahaman dasar UAV (VTOL, HTOL, komponen, algoritma)
- ✅ Algoritma pathfinding (A*, D*), control (PID), dan estimasi (Kalman Filter, EKF)

**🔧 Bagian B - Technical Skills (Dasar Pemrograman & Firmware)**
- ✅ **OOP Concepts**: Implementasi lengkap class, object, abstraction, encapsulation, inheritance, polymorphism
- ✅ **Design Pattern**: Refactoring telemetry processor dengan **Strategy Pattern**
- ✅ **Multithreading**: Concurrent processing simulation untuk telemetry & video streaming
- ✅ **C++ Deep Dive**: Preprocessor directives, namespaces, pointers, smart pointers, pass by reference
- ✅ **Doxygen Documentation**: Dokumentasi header files untuk pipeline parser & vision to mavros
- ✅ **Firmware & RTOS**: Pemahaman firmware dalam UAV systems & real-time operating systems
- ✅ **Serial Communication**: UART, SPI, I2C protocols dalam UAV

### 📁 Struktur Repository

```
CaRSC26_<NIM>_THT/
├── 📄 README.md                    # File ini - overview & progress tracker
├── 📂 docs/                        # Dokumentasi jawaban
│   ├── jawaban-a.md               # Jawaban Bagian A (teori & setup)
│   ├── jawaban-b.md               # Jawaban Bagian B (technical skills)
│   └── progres.md                 # Log progres pengerjaan
├── 📂 lampiran_dari_source/        # File lampiran dari soal
│   ├── pipeline_parser.hpp
│   ├── vision_to_mavros.hpp
│   ├── telemetry_processor.cpp
│   └── telemetry_data.txt
└── 📂 src/                         # Source code implementasi
    ├── 📂 a/                       # ✅ Bagian A (1-6)
    │   ├── 1/ ... 6/              # Screenshots, configs, exercises
    └── 📂 b/                       # Bagian B
        ├── 📂 daspro/              # ✅ Dasar Pemrograman (COMPLETED)
        │   ├── nomor1/            # OOP concepts dengan contoh C++
        │   ├── nomor2/            # Refactored telemetry processor (Strategy Pattern)
        │   ├── nomor3/            # Multithreading simulation
        │   └── nomor4/            # Doxygen documented header files
        ├── 📂 firmware/            # ✅ Firmware & Embedded (COMPLETED)
        ├── 📂 concept/             # ⏭️ Not attempted
        └── 📂 gcs/                 # ⏭️ Not attempted
```

### 🛠️ Tech Stack yang Digunakan

**Development Environment:**
- Ubuntu 22.04 LTS (WSL)
- ROS2 Humble (installed & tested)
- Git & GitHub dengan SSH authentication

**Programming Languages:**
- C++ (OOP, multithreading, design patterns)
- Python (untuk multithreading simulation)

**Tools & Software:**
- QGroundControl (Mission planning)
- Doxygen (Code documentation)
- VSCode (Primary IDE)
- g++ compiler (C++ compilation)
- QGroundControl/Mission Planner (GCS)
- Doxygen (Documentation)

### 📝 Dokumentasi

Untuk penjelasan detail mengenai setiap soal dan solusinya, silakan lihat:
- 📖 [Jawaban Bagian A](docs/jawaban-a.md) - Dasar teori, setup environment, algoritma
- 📖 [Jawaban Bagian B](docs/jawaban-b.md) - OOP, C++, Firmware, RTOS
- 📓 [Log Progres](docs/progres.md) - Perjalanan pengerjaan, tantangan, & solusi yang jujur

### 🚀 Quick Start

Untuk menjalankan kode-kode yang ada di repository ini:

```bash
# Clone repository
git clone <repository-url>
cd CaRSC26_<NIM>_THT

# Compile & run C++ OOP refactored code
cd src/b/daspro/nomor2
g++ -o app telemetry_processor_refact.cpp
./app

# Run multithreading simulation
cd src/b/daspro/nomor3
g++ -o app multithreading_sim.cpp -pthread
./app
```

### 💡 Key Learnings

Beberapa hal penting yang dipelajari selama pengerjaan THT ini:

1. **OOP Design Patterns** - Memahami kapan dan bagaimana menerapkan Strategy Pattern dalam refactoring procedural code
2. **C++ Memory Management** - Smart pointers (unique_ptr vs shared_ptr) dan pass by reference
3. **Concurrent Programming** - Thread synchronization dan concurrent task execution
4. **UAV Ecosystem** - Memahami komponen UAV, flight mechanics, dan ground control systems
5. **Algorithm Foundation** - A*/D* pathfinding, PID control, dan Kalman filtering
6. **Professional Development** - Git workflows, code documentation dengan Doxygen, technical writing

### 📌 Catatan Pengerjaan

Fokus pengerjaan THT ini adalah pada **Bagian A (wajib)** dan **sebagian Bagian B** yang meliputi Dasar Pemrograman dan Firmware & Sistem Benam. Bagian ConCept dan GCS tidak dikerjakan karena keterbatasan waktu dan prioritas pada penguasaan fundamental programming dan UAV basics.

---

## 📋 Ketentuan Umum THT

### Soal

* Soal Take Home Test (THT) Calon Anggota Robotics Software Control (RSC) Aksantara ITB 2026 tersusun atas **dua bagian**:
  * Bagian A (**wajib**) berfokus pada dasar teori dan persiapan lingkungan kerja.
  * Bagian B (**direkomendasikan**) berfokus pada kemampuan teknikal yang dibutuhkan.
  * Harap seminimalnya mengerjakan bagian A dengan lengkap, sebab untuk tahap pendidikan selanjutnya Anda diasumsikan setidaknya memahami topik yang dibahas pada bagian tersebut.
* Selain mengerjakan bagian A dan B, Anda wajib membuat sebuah **log progres pengerjaan** dengan format penulisan yang dibebaskan. Log ini ditujukan untuk mendokumentasikan progres, tantangan, dan refleksi pribadi selama mengerjakan THT. Silakan manfaatkan log ini sebagai media untuk mengomunikasikan bagaimana kalian menjumpai kesulitan dalam pengerjaan THT dan menemukan solusinya sendiri serta merincikan progres THT kalian dari waktu ke waktu.
  * Harap mengisi log secara jujur tanpa mengada-ada. Bahkan jika Anda *deadliner* dan baru mengerjakan THT pada hari tenggat pengumpulannya, tuliskan apa adanya dan jelaskan kendalanya jika ada.
  * Diperbolehkan menggunakan bahasa yang informal. Gunakan bahasa senyaman kalian asal tetap menjaga etika.
  * Log akan masuk dalam penilaian.

### Deliverables

* Jawaban THT ditulis sebagai dokumen Markdown (pelajari lewat [tutorial ini](https://www.markdowntutorial.com/)) dan dilengkapi dengan kode sumber **dalam file terpisah** untuk soal yang membutuhkan pemrograman. Dokumen Markdown dipisah untuk bagian A dan B serta log progres pengerjaan. Untuk setiap dokumen Markdown, harap cantumkan nama panggilan dan NIM Anda.

* Seluruh jawaban (dokumen Markdown maupun kode sumber) disatukan di sebuah [repositori GitHub](https://docs.github.com/en/repositories/creating-and-managing-repositories/about-repositories) dengan format nama repositori `CaRSC26_<NIM>_THT` (contoh: `CaRSC26_19625999_THT`).

* Secara umum, struktur repositori GitHub Anda dapat berbentuk mirip seperti ini:

```shell
/CaRSC26_<NIM>_THT
├─── README.md                # README repository
├─── docs                     # menampung seluruh jawaban teks
│   ├─── jawaban-a.md
│   ├─── jawaban-b.md
│   └─── progres.md           # log progres pengerjaan
│ 
├── lampiran                 
└── src
    ├── a                     # untuk file pendukung jawaban bagian A
    │   ├── 1                 # no 1
    │   ├── ...               # ... dst              
    │   └── 6
    └── b                     # untuk file pendukung jawaban bagian B
        ├── daspro            # dasar pemrograman
        ├── firmware          # firmware & sistem benam
        ├── concept           # control & perception
        └── gcs               # ground control station
```

> [!NOTE]  
> Strukturnya sudah kami bikinkan, jangan lupa hapus file .gitkeep-nya ya :)
> Sesuaikan dengan kebutuhan, tidak harus persis sama seperti di atas.

* Lakukan commit secara berkala (misal setiap kali menyelesaikan satu soal/subsoal) dengan [pesan commit yang deskriptif](https://www.conventionalcommits.org/en/v1.0.0/).

### Kebijakan Penggunaan AI

> [!CAUTION]
> Penggunaan AI untuk mengerjakan THT ini **sangat tidak direkomendasikan**.

* Tujuan THT ini adalah sebagai sarana seleksi sekaligus fondasi untuk pelaksanaan pendidikan. Jika Anda menggunakan AI hanya untuk lolos pencoretan tanpa benar-benar belajar, kemungkinan besar Anda akan kesulitan ketika Day Pendidikan.
* Penggunaan AI secara terbatas sebagai alat bantu belajar masih ditoleransi. Cantumkan dalam log progres terkait kapan dan untuk apa AI digunakan.
* Anda harus memahami setiap kode/jawaban yang Anda tulis. Hal ini akan benar-benar diperiksa setelah THT dan hak Anda mengikuti pendidikan **bisa dicabut** jika terbukti tidak memahami kode/jawaban Anda sendiri. Pemeriksaan terkait hal ini akan **dilakukan sepanjang pendidikan** secara spontan (uhuy) tanpa adanya pemberitahuan terlebih dahulu.
* *Copy-paste* mentah dari AI tanpa pemahaman akan mudah terdeteksi dan pada akhirnya juga akan merugikan Anda sendiri.
* Seluruh informasi yang Anda butuhkan untuk menjawab soal THT ini harusnya tersedia di internet. Gunakan AI hanya sebagai alat bantu belajar, bukan sebagai sumber jawaban utama.

### Teknis Pengumpulan

* Kumpulkan tautan repositori GitHub Anda sesuai teknis yang diberikan pada dokumen PDF THT. Pastikan repositori [bersifat publik](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/managing-repository-settings/setting-repository-visibility#changing-a-repositorys-visibility) pada saat pengumpulan.
* Batas waktu pengumpulan THT adalah **22 Januari 2026** pukul **23:59 WIB**.
* Anda dapat terus melakukan commit dan push di repositori THT meski waktu pengumpulan sudah berakhir, namun tim korektor hanya akan menilai berdasarkan commit terakhir sebelum tenggat waktu.
* Apabila terdapat pertanyaan selama proses pengerjaan THT, ajukan pertanyaan seputar THT ini melalui [sheets QnA](https://s.hmif.dev/QnA_THT).

## Soal

### Bagian A

Bagian ini berfokus pada dasar teori yang wajib dimiliki oleh Ca-RSC 2026 untuk dapat mengikuti pendidikan. Untuk dapat lolos ke tahap berikutnya, minimalnya **WAJIB** menyelesaikan semua bagian ini.

#### 1. **Analisis Kondisi** (10 Poin)

Isi [formulir ini](https://forms.gle/YrL9wMXFTUwe58Qi7) dan cukup tuliskan akun email yang digunakan untuk mengisinya sebagai jawaban.

#### 2. **Source Control Management** (16 poin)

[Git dan GitHub](https://docs.github.com/en/get-started/start-your-journey/about-github-and-git) adalah kakas paling penting dalam mengembangkan perangkat lunak. Mereka memungkinkan kita untuk bekerja secara kolaboratif dan mengatur file-file dengan sistem *version control*. Setiap perubahan kode bisa  kita lacak, kelola, dan kembalikan ke keadaan sebelumnya jika diperlukan. Untuk soal ini, silakan [menginstal Git](https://git-scm.com/install/) di perangkat Anda.
   <ol type="a">
      <li> (2 poin) Sebutkan setidaknya 4 <b>commands</b> dalam Git dan jelaskan kegunaan serta contoh penggunaannya.
      <li> (2 poin) Lakukan setup untuk <a href="https://code.visualstudio.com/docs/sourcecontrol/github">menghubungkan Git dan VSCode dengan GitHub</a>. Cantumkan tangkapan layar untuk tab <a href="https://code.visualstudio.com/docs/sourcecontrol/overview">Source Control</a> di <i>sidebar</i> VSCode. Jika menggunakan kode editor lain, sesuaikan setup dan cantumkan tangkapan layarnya.
      <li> (4 poin) Tamatkan 4 topik Main pertama (hingga 4: Rebase Introduction) dan 6 topik Remote pertama (hingga 6: Git Pushin') di <a href="https://learngitbranching.js.org">https://learngitbranching.js.org</a>. Cantumkan tangkapan layar sebagai jawaban.
      <li> (4 poin) Pelajari bagaimana Git dan GitHub berkomunikasi dengan SSH (Secure Shell) dari <a href="https://www.w3schools.com/git/git_security_ssh.asp?remote=github">sini</a> dan <a href="https://www.w3schools.com/git/git_remote_add_ssh.asp?remote=github"> sini </a> lalu kerjakan tutorial pada <a href="https://www.w3schools.com/git/exercise.asp?x=xrcise_security_ssh1">tautan ini</a> untuk bagian "Git SSH Security". Lampirkan tangkapan layar bukti menyelesaikan <i>exercise</i>.
      <li> (4 poin) Dalam repositori THT Anda, lakukan <a href="https://learngitbranching.js.org/">branching</a> dengan:
   <ul>
      <li> membuat <i>branch</i> <code>jawaban-a</code> untuk mengerjakan Bagian A
      <li> membuat <i>branch</i> <code>jawaban-b</code> untuk mengerjakan Bagian B
      <li> <i>merge</i> kedua branch ke <code>main</code> dengan <b>Pull Request</b> di akhir pengerjaan THT
   </ul>
   </ol>
         Cantumkan tangkapan layar <i>history branch</i> Anda sebagai jawaban. Jawaban untuk soal ini kemungkinan baru bisa Anda tambahkan setelah sepenuhnya menyelesaikan bagian A dan B.

#### 3. **Pengenalan Ground Control Station** (16 poin)

Mission Planner adalah perangkat lunak *ground control station* (GCS) yang memungkinkan kita untuk merencanakan misi, memantau telemetri, dan mengonfigurasi parameter UAV.
   <ol type="a">
      <li> (3 poin) Instal Mission Planner (Windows) atau QGroundControl (Linux, MacOS) dan cantumkan tangkapan layar halaman utamanya sebagai jawaban.
      <li> (4 poin) Jelaskan minimal 4 fitur utama Mission Planner atau QGroundControl dan kegunaannya dalam operasi UAV.
      <li> (9 poin) Buat sebuah misi pemetaan sederhana untuk area persegi panjang dengan panjang 100 meter dan lebar 80 meter. Export misi sebagai file .waypoints (untuk Mission Planner) atau .plan (untuk QGroundControl) dan cantumkan file tersebut sebagai jawaban. Jika tidak bisa export file, cantumkan screenshot dari misi yang dibuat.</li>
   </ol>

#### 4. **Development Environment** (19 poin)

Instal **[Ubuntu 22.04 LTS](https://releases.ubuntu.com/jammy/)** dengan salah satu cara berikut: [WSL](https://ubuntu.com/desktop/wsl) (5 poin), [VM](https://ubuntu.com/tutorials/how-to-run-ubuntu-desktop-on-a-virtual-machine-using-virtualbox) (7 poin), atau *[dual boot](https://www.youtube.com/watch?v=GXxTxBPKecQ)* (11 poin). Untuk *dual boot*, **pastikan sudah mem-*backup*** file pribadi Anda terlebih dahulu.
   <ol type="a">
      <li> (2 poin) Instal <code>python3</code>, <code>python3-pip</code>, <code>python3-venv</code>, <code>uvicorn</code>, dan <code>build-essential</code> lewat terminal menggunakan perintah <code>sudo apt install</code>. Cantumkan tangkapan layar pada terminal sebagai jawaban.
      <li> (6 poin) Instal <a href="https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html">ROS2 Humble</a> dan jalankan sebuah <a href="https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html#talker-listener">sistem talker-listener sederhana</a> bawaan. Cantumkan tangkapan layar dari kedua terminal yang menjalankan sistem tersebut sebagai jawaban.
   </ol>

#### 5. **Dasar-Dasar UAV** (21 poin)

Pengetahuan dan wawasan tentang wahana udara nirawak (*unmanned aerial vehicle*, UAV) seharusnya menjadi *bare minimum* untuk orang yang layak menjadi anggota Aksantara ITB.
   <ol type="a">
      <li> (3 poin) Berdasarkan cara terbangnya, UAV secara umum dapat diklasifikasikan menjadi VTOL (<i>rotary-wing</i>), HTOL (<i>fixed-wing</i>), dan <i>hybrid</i>. Jelaskan perbedaan antara ketiganya, khususnya terkait mekanisme terbangnya, tetapi tidak terbatas pada itu.
      <li> (5 poin) Jelaskan apa itu gerak <i>roll</i>, <i>yaw</i>, dan <i>pitch</i>; <i>air speed</i> dan <i>ground speed</i> (beserta hubungan antara keduanya); serta HDOP dalam GPS dan RSSI dalam telekomunikasi UAV.
      <li> (5 poin) Sebutkan dan jelaskan komponen-komponen dalam UAV beserta kegunaannya, lalu gambarkan hubungan antarkomponen tersebut dengan diagram blok. Bila perlu, asumsikan UAV-nya digunakan untuk misi pemetaan.
      <li> (8 poin) Cari satu publikasi ilmiah (jurnal, paper, dsb) tentang UAV (atau sistem pendukung UAV) dengan topik bebas yang menarik perhatian Anda lalu ceritakan kembali kontennya beserta <i>insights</i> yang Anda dapatkan. Harap tidak menggunakan bantuan AI sama sekali karena soal ini mengukur kemampuan komprehensi membaca Anda. Jangan lupa cantumkan tautan menuju publikasi yang Anda ulas.
   </ol>

#### 6. **Algoritma** (18 poin)

Jelaskan cara kerja algoritma-algoritma di bawah ini beserta kapan dan di mana algoritma tersebut digunakan! Anda diharuskan untuk menggunakan bahasa Anda sendiri dan menggunakan referensi yang kredibel untuk menjawab soal ini. Silakan mengeksplorasi sejauh mungkin! :D
   <ol type="a">
      <li> (6 poin) A* (A-star) dan D* (D-star)
      <li> (6 poin) Proportional-Integral-Derivative (PID)
      <li> (6 poin) Kalman Filter dan Extended Kalman Filter (EKF)
   </ol>

> [!IMPORTANT]
> Jangan lupa  **selalu tuliskan semua referensi** dari mana Anda mendapatkan jawaban-jawaban untuk setiap soal, entah dari artikel, buku, jurnal, atau bahkan AI (sebaiknya dihindari). Semakin kredibel sumber Anda, semakin besar poin yang diberikan. Selain itu, hal ini juga akan membiasakan sikap bertanggung jawab dalam menulis.
> Jika memungkinkan, **tambahkan gambar, diagram, atau ilustrasi** untuk memperjelas jawaban Anda.

### Soal Bagian B

> [!IMPORTANT]
> Bagian ini berfokus pada pengetahuan dan keterampilan khusus yang akan dipelajari lebih lanjut pada saat pendidikan. Mengingat kuota yang **sangat terbatas** dan *persaingan yang sangat ketat*, **DIREKOMENDASIKAN** mengerjakan bagian ini untuk memperbesar peluang lolos ke tahap berikutnya.

#### Dasar Pemrograman (55 poin)

1. (25 poin) **Pemrograman berorientasi objek** (*Object Oriented Programming* atau OOP) adalah paradigma pemrograman yang menggunakan objek untuk merepresentasikan data dan perilaku dalam sebuah program.
   <ol type="a">
      <li> (9 poin) Jelaskan konsep-konsep dasar OOP berikut dan berikan contoh singkat dalam bahasa C++: <i>class</i>, <i>object</i>, <i>abstraction</i>, <i>encapsulation</i>, <i>inheritance</i>, dan <i>polymorphism</i>.
      <li> (16 poin) Perhatikan file <a href="/lampiran/telemetry_processor.cpp"><code>telemetry_processor.cpp</code></a> dan data di <a href="/lampiran/telemetry_data.txt"><code>telemetry_data.txt</code></a>. Kode tersebut adalah implementasi prosedural untuk memproses data telemetri UAV. Silakan <i>refactor</i> kode tersebut menjadi implementasi berorientasi objek (OOP) dengan membuat kelas yang sesuai. Selain itu, pelajari salah satu <a href="https://refactoring.guru/design-patterns">design pattern</a> sederhana (misalnya, Factory, Observer, atau Strategy) dan terapkan dalam refactor tersebut. Jelaskan <i>design pattern</i> yang Anda gunakan dan mengapa cocok untuk kasus ini. Lampirkan kode hasil <i>refactor</i> sebagai jawaban.
   </ol>

2. (10 poin) **Bahasa C++** merupakan salah satu bahasa pemrograman utama yang digunakan dalam RSC Aksantara ITB. Pelajari sintaks dasar dalam C++ dari sumber mana pun, kemudian jelaskan bagaimana konsep berikut bekerja serta kasus penggunaannya:
   <ol type="a">
      <li> Apa itu <code>#include &ltfile_name&gt</code> dan <code>#include "file_name"</code> serta perbedaan antara keduanya
      <li> Penggunaan <code>#ifdef</code>, <code>#ifndef</code>, <code>#endif</code> dan <code>#pragma once</code> dalam header file
      <li> Penggunaan <i>namespace</i> dan <i>scope resolution operator</i> (<code>::</code>)
      <li> Perbedaan <code>#define</code> dan <code>using</code>
      <li> Cara kerja <i>pointer</i> (<code>*</code>) dan <i>address of</i> (<code>&</code>)
      <li> Konsep <i>pass by value</i> dan <i>pass by reference</i> dalam definisi variabel dan fungsi
      <li> Perbedaan <code>std::unique_ptr</code> dan <code>std::shared_ptr</code>
   </ol>

3. (10 poin) Multithreading adalah kemampuan sebuah program untuk menjalankan beberapa bagian kode secara bersamaan.
   <ol type="a">
      <li> (4 poin) Jelaskan konsep dasar <i>multithreading</i>.
      <li> (6 poin) Salah satu contoh kasus penggunaan <i>multithreading</i> adalah ketika GCS harus memproses data telemetri dari UAV dan stream video dari kamera secara bersamaan. Kita akan mencoba mengimplementasikan sebuah program Python/C++ sederhana yang menggunakan <i>multithreading</i> untuk mensimulasikan kasus tersebut. Namun, karena kasus semacam itu cukup rumit dan susah disimulasikan, kali ini kita akan mencoba contoh yang lebih sederhana. Program harus memiliki dua thread dengan rincian sebagai berikut:
         <ul>
            <li>Thread pertama: Untuk mensimulasikan seolah-olah menerima stream video, thread ini mencetak "Receiving video frame..." setiap 2 detik.</li>
            <li>Thread kedua: Untuk mensimulasikan seolah-olah menerima data telemetri, thread ini membaca file <a href="./lampiran/telemetry.txt"><code>telemetry.txt</code></a> dan mencetak tiap baris setiap 3 detik.</li>
         </ul>
         Pastikan kedua thread berjalan secara bersamaan tanpa saling mengganggu. Lampirkan kode sumber program tersebut sebagai jawaban, serta output contoh saat program dijalankan selama 10 detik.
      </ol>

4. (10 poin) Perhatikan *file* [pipeline_parser.hpp](lampiran/pipeline_parser.hpp) dan [vision_to_mavros.hpp](lampiran/vision_to_mavros.hpp).
   <ol type="a">
    <li> Jelaskan perbedaan cara pendefinisian kedua <i>header file</i> tersebut dari segi apa pun yang Anda temukan. Jika memungkinkan, kaitkan dengan jawaban soal nomor 2.
    <li> Salin kedua file tersebut, kemudian buatlah <a href="https://www.geeksforgeeks.org/cpp/doxygen-cpp-documentation/">dokumentasi Doxygen</a> terhadap setiap definisi yang ada. Tingkat detail dokumentasi dan asumsi awal terhadap kode dibebaskan. Untuk menjawab soal ini, Anda hanya perlu melampirkan kedua file hasil dokumentasi Doxygen tersebut (tidak perlu di-copas ke dalam dokumen jawaban).
   </ol>

> [!NOTE]  
> Kode di atas diambil di luar konteks, sehingga kami memaklumi apabila Anda tidak memahami keseluruhan kodenya. Cukup tuliskan saja apa yang Anda ketahui. Tujuan soal ini adalah menguji kemampuan Anda memahami *codebase* dengan hanya dari *header file*.

#### Firmware dan Sistem Benam (15 poin)

1. (5 poin) Apa itu *firmware* dan bagaimana perbedaannya dengan perangkat lunak (*software*) pada umumnya? Jelaskan juga peran *firmware* dalam sistem UAV.
2. (5 poin) Jelaskan konsep Real-Time Operating System (RTOS) dan mengapa RTOS penting dalam pengembangan sistem UAV.
3. (5 poin) Jelaskan konsep dasar komunikasi serial (UART, SPI, I2C) dan bagaimana protokol-protokol ini digunakan dalam sistem UAV untuk berkomunikasi antara berbagai komponen.

#### Jurusan Control and Perception (ConCept) (75 poin)

1. (5 poin) **Robot Operating System (ROS)** adalah seperangkat pustaka (*library*) dan alat yang digunakan para *developer* robot dan UAV. Saat ini, versi ROS yang digunakan di RSC Aksantara ITB adalah [ROS2 Humble](https://docs.ros.org/en/humble/). Jelaskan konsep-konsep dasar pada ROS berikut sesuai bahasa Anda sendiri dan **analoginya** dengan konsep yang Anda familiar:
    * *Nodes*
    * *Topics*
    * *Services*
    * *Parameters*
    * *Actions*

2. (15 poin) Masih dengan dokumentasi yang sama, buatlah sebuah [sistem publisher dan subscriber dalam C++](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html) dengan ketentuan berikut:
    * Nama workspace bebas, nama package `yapping`.
    * Node publisher bernama `clock` dan node subscriber bernama `watch`.
    * Topic bernama `time` dan berisi tanggal dan waktu sesuai format [ISO 8601](https://www.loc.gov/standards/datetime/iso-tc154-wg5_n0038_iso_wd_8601-1_2016-02-16.pdf) di saat message dipublish.
    * Lampirkan seluruh workspace (tanpa file hasil build) pada repositori.

3. (15 poin) Buatlah [sistem service dan client dalam C++](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Service-And-Client.html) dengan meng-_extend_ package yang sudah dibuat pada soal sebelumnya dengan ketentuan sebagai berikut:
    * Tambahkan service bernama `duration` pada node `clock` yang menerima argumen berikut:
        * `start_time` berisi tanggal dan waktu awal dalam format ISO 8601.
        * `end_time` berisi tanggal dan waktu akhir dalam format ISO 8601.
    * Sesuai namanya, service tersebut akan mengirim response durasi antara kedua waktu dengan format berikut:
        * Secara normal, kirim response durasi dengan format ISO 8601 sesuai ketentuan Anda.
        * Apabila `start_time` lebih akhir daripada `end_time`, `throw` error yang sesuai, lalu handle sesuai ketentuan Anda.
    * Buatlah sebuah node baru bernama `user` yang dapat memanggil service tersebut. Ketika node dijalankan, program akan membaca dari `stdin` waktu awal dan akhir dan node akan mengeprint time dari node service.
    * Lampirkan seluruh workspace (tanpa file hasil build) pada repositori.

> [!NOTE]
> Jenis format tanggal/waktu ISO yang dipilih adalah **bebas** sesuai dengan kebutuhan Anda. Jelaskan dalam dokumentasi kode mengapa Anda memilih format tersebut. 

1. (10 poin) **Pinhole Camera Model** merupakan salah satu model kamera yang praktis dan sering digunakan dalam *Computer Vision*. Salah satu buku *legend* Computer Vision adalah ***Computer Vision: A Modern Approach*** oleh David A. Forsyth dan Jean Ponce. Carilah buku tersebut di internet dan pelajari untuk menjawab soal-soal berikut.
   <ol type="a">
    <li> Apa itu konsep Pinhole Camera Model? Gambarkan (<b>dengan tulisan tangan</b>) diagram cara kerjanya!
    <li> Apa itu <i>homogeneous coordinates</i> dan <i>rigid transformation</i>? Tuliskan persamaannya!
    <li> Apa itu parameter intrinsik dan parameter ekstrinsik kamera? Jelaskan perbedaannya!
    <li> Apa perbedaan <i>perspective projection matrix</i> serta <i>weak-perspective projection matrix</i>?
    <li> Jelaskan perbedaan proses kalibrasi kamera secara linear dan nonlinear!
   </ol>

> [!TIP]  
> Beberapa materi yang di bahas pada soal-soal ini mungkin memerlukan latar belakang Aljabar Linier atau Aljabar Geometri. Coba sambil pelajari untuk memperkuat pemahaman Anda.

5. (10 poin) **OpenCV** merupakan *library computer vision* paling lengkap di dunia. Dokumentasi utama OpenCV dapat dilihat di [https://opencv.org/](https://opencv.org/). Selain itu, terdapat juga buku ***Learning OpenCV 3: Computer Vision in C++ with the OpenCV Library (2017)*** oleh Adrian Kaehler dan Gary Bradski. Seperti soal sebelumnya, carilah buku tersebut atau lihat dokumentasinya secara langsung dan coba kerjakan beberapa soal-soal berikut.
    * Download dan install OpenCV C++ pada perangkat Anda.
    * Muat sebuah gambar bebas (meme pun boleh 🥀 asal ga berbau SARA) dengan `cv::mat`
    * Edit gambar tersebut dengan mengaplikasikan transformasi apa pun sekreatif mungkin.
    * Lampirkan kode sumber beserta gambar sebelum dan sesudah transformasi.

2. (20 poin) Perhatikan video [circle.mp4](lampiran/circle.mp4). Muat video tersebut di OpenCV, lalu parse setiap frame menjadi gambar. Selanjutnya, lakukan **tracking** lingkaran tersebut dengan langkah-langkah berikut:
    * Lakukan **masking** (memisahkan data relevan dan tidak relevan) untuk warna lingkaran yang akan dilacak
    * Buatlah **contours** (outline/batas objek) lingkaran dari hasil masking.
    * Gambarkan **bounding box** di batas-batas objek yang terdeteksi untuk setiap frame.
    * Dokumentasikan hasil deteksi objek dengan screen recorder, atau output hasilnya ke video baru.
    * Lampirkan kode sumber dan video hasil deteksi dalam repositori.


#### Jurusan Ground Control Station (GCS) (55 poin)

1. (6 poin) **MAVLink** adalah protokol komunikasi ringan yang digunakan dalam sistem UAV untuk mengirim dan menerima data antara berbagai komponen, seperti antara UAV dan *ground control station* (GCS). Jelaskan konsep dasar MAVLink berikut sesuai bahasa Anda sendiri:
    * Struktur pesan MAVLink
    * Sistem ID dan Komponen ID
    * Cara kerja sistem *heartbeat* dalam MAVLink
    * Jenis-jenis pesan MAVLink yang umum digunakan dalam komunikasi UAV

2. (7 poin) Aplikasi web adalah aplikasi yang berjalan di dalam browser web dan dapat diakses melalui internet atau jaringan lokal. Dalam konteks GCS, aplikasi web dapat digunakan untuk memantau dan mengendalikan UAV dari jarak jauh. Buatlah diagram arsitektur sederhana untuk mendeskripsikan cara kerja aplikasi web. Jelaskan komponen-komponen utama dalam arsitektur tersebut dan bagaimana mereka saling berinteraksi.

3. (5 poin) **Docker** adalah platform yang memungkinkan pengembang untuk mengemas aplikasi dan dependensinya ke dalam sebuah wadah (*container*). Wadah ini dapat dijalankan di berbagai lingkungan tanpa perlu khawatir tentang perbedaan konfigurasi sistem. Jelaskan konsep dasar Docker berikut sesuai bahasa Anda sendiri:
    * Perbedaan antara *container* dan *virtual machine*
    * Cara kerja Dockerfile
    * Manfaat menggunakan Docker dalam pengembangan aplikasi web GCS

4. (30 poin) Buatlah sebuah aplikasi web sederhana dengan spesifikasi sebagai berikut.
   * Backend menggunakan Python (Flask atau FastAPI) atau Go (Gin atau Echo)
   * Database menggunakan SQLite atau PostgreSQL
   * Frontend menggunakan framework JavaScript React atau Svelte
   * Frontend dan backend dikontainerisasi menggunakan Docker
   * Fitur aplikasi:
      * Menampilkan sebuah tabel (semula kosong) dengan format kolom: ID, waktu, latitude (derajat), longitude (derajat), altitude (meter), speed (m/s), battery (%).
      * Tabel dapat diisi oleh pengguna melalui form input di halaman web lalu menekan tombol "Submit".
      * Data yang diinput akan disimpan di database.
      * Entri tabel dapat dihapus satu per satu melalui tombol "Delete" pada tiap baris.
      * Entri tabel dapat diubah melalui tombol "Edit" pada tiap baris, yang akan menampilkan form input berisi data lama yang dapat diubah lalu disimpan.
      * Validasi input pada form: latitude antara -90 hingga 90, longitude antara -180 hingga 180, altitude ≥ 0, speed ≥ 0, battery antara 0 hingga 100.
      * Tabel dapat diurutkan berdasarkan kolom tertentu (misal: altitude tertinggi, speed terendah, battery tersisa).
   * Lampirkan kode sumber aplikasi web tersebut pada repositori.

5. (7 poin) Untuk soal ini, Anda hanya perlu menjelaskan bagaimana cara menghubungkan aplikasi web yang Anda buat pada soal sebelumnya dengan UAV menggunakan protokol MAVLink. Jelaskan langkah-langkah yang diperlukan untuk mengirim dan menerima data telemetri antara aplikasi web dan UAV melalui MAVLink. Rincikan jenis message MAVLink yang akan digunakan untuk komunikasi tersebut serta bagaimana data tersebut akan diproses di sisi aplikasi web dan UAV.

## Referensi

### Git dan Version Control

- [Dokumentasi Git](https://docs.github.com/en/get-started/git-basics)
* [Learn Git Branching](https://learngitbranching.js.org)
* [Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0/)

### Bahasa Pemrograman

- [Tutorial C++](https://cplusplus.com/doc/tutorial/)
* [Python Documentation](https://docs.python.org/3/)
* [C++ Reference](https://en.cppreference.com/w/)

### ROS dan Robotics

- [ROS2 Humble Documentation](https://docs.ros.org/en/humble/)
* [ROS2 Tutorials](https://docs.ros.org/en/humble/Tutorials.html)

### Computer Vision

- [OpenCV Documentation](https://docs.opencv.org/)
* [Learning OpenCV](https://opencv.org/books/)
* [Computer Vision: A Modern Approach - Forsyth & Ponce](https://eclass.hmu.gr/modules/document/file.php/TM152/Books/Computer%20Vision%20-%20A%20Modern%20Approach%20-%20D.%20Forsyth%2C%20J.%20Ponce.pdf)

### UAV dan GCS

- [MAVLink Protocol](https://mavlink.io/en/)
* [ArduPilot Documentation](https://ardupilot.org/ardupilot/)
* [PX4 User Guide](https://docs.px4.io/main/en/)
* [Mission Planner Documentation](https://ardupilot.org/planner/)
* [QGroundControl User Guide](https://docs.qgroundcontrol.com/master/en/)

### Web Development

- [Flask Documentation](https://flask.palletsprojects.com/)
* [FastAPI Documentation](https://fastapi.tiangolo.com/)
* [React Documentation](https://react.dev/)
* [Svelte Documentation](https://svelte.dev/)

### DevOps dan Containerization

- [Docker Documentation](https://docs.docker.com/)
* [Docker Compose](https://docs.docker.com/compose/)

### Design Patterns

- [Refactoring Guru - Design Patterns](https://refactoring.guru/design-patterns)
* [Gang of Four Design Patterns](https://springframework.guru/gang-of-four-design-patterns/)

### Algoritma

- [Introduction to A* Pathfinding](https://www.redblobgames.com/pathfinding/a-star/introduction.html)
* [PID Control - Wikipedia](https://en.wikipedia.org/wiki/PID_controller)
* [Kalman Filter Tutorial](https://www.kalmanfilter.net/)

### Lain-lain

- [Markdown Tutorial](https://www.markdowntutorial.com/)
- [ISO 8601 Date and Time Format](https://www.iso.org/iso-8601-date-and-time-format.html)
- [Doxygen Documentation](https://www.doxygen.nl/manual/)
