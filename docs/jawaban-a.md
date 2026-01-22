# 1. Analisis Kondisi
email form: nafhan1723@gmail.com

# 2. Source Control Management
## a. Contoh 4 commands git
1. git clone -> untuk cloning sebuah repo 
contoh: git clone https://github.com/nafhan1723/2026_THT_RSC.git
2. git add -> untuk menambahkan file ke staging area
contoh: git add .
3. git commit -> untuk membuat commit
contoh: git commit -m "[chore] add new file"
4. git push -> untuk mengupload commit ke remote repo4
contoh: git push origin main

## b. Setup source control Git
/src/a/2/bukti_setup.png

## c. Latihan Main dan Remote
/src/a/2/main_latihan_1.png - main_latihan_4.png
/src/a/2/remote_latihan_1.png - remote_latihan_6.png

## d. Latihan W3school untuk SSh Git Security
/src/a/2/bukti_ssh.png

# 3. Pengenalan Ground Control Station
## a. Instalasi
/src/a/3/mission_planner_installation.png

## b. Jelaskan minimal 4 fitur utama Mission Planner atau QGroundControl dan kegunaannya dalam operasi UAV.
- Fly View: Berfungsi sebagai dashboard utama saat drone terbang. Menampilkan peta dan data telemetri seperti ketinggian, kecepatan, baterai, dan status satelit GPS.
- Plan View: Tempat untuk membuat pergerakan otomatis, operator dapat membuat waypoints dan mengatur rute secara tersendiri.
- Vehicle Setup: Menu ini digunakan untuk konfigurasi hardware. 
- Analyze Tools: Fitur canggih untuk melihat pesan raw MAVLink yang dikirim oleh drone, melihat grafik sensor secara real-time, dan mengecek log penerbangan untuk troubleshooting.

## c. Buat sebuah misi pemetaan sederhana untuk area persegi panjang dengan panjang 100 meter dan lebar 80 meter.
/src/a/3/pemetaan.png

# 4. Development Environment 
## a. Python setup
/src/a/3/setup.png

## b. Installation ROS2 (Saya install dengan Docker karena di Arch Linux butuh berjam2)
/src/a/3/ros2.png

# 5. Dasar - dasar UAV
## a. Cara terbang
1. VTOL - Vertical Takeoff and Landing:
Mengandalkan baling - baling untuk menghasilkan dorongan langsung ke bawah
atau menciptakan dorongan secara vertikal. Tidak butuh landasan pacu secara langsung. (Contoh: quadcopter)
2. HTOL - Horizontal Takeoff and Landing
Membutuhkan landasan pacu untuk lepas landas dan mendarat. Menggunakan sayap tetap untuk menghasilkan daya angkat. (Contoh: pesawat terbang konvensional)
3. Hybrid VTOL
Membuat kombinasi dari VTOL dan HTOL. Memiliki sayap yang dapat untuk menggunakan fungsi antara vertikal dan horizontal takeoff/landing. (Contoh: Baling - baling bambu Doraemon kalo misalkan Nobita dikasih papan kayu di tangan kanan sama tangan kirinya)

## b. Terminologi Gerak + Navigasi
1. Roll: Gerakan putar di sumbu X, drone miring ke kiri atau kanan.
2. Pitch: Gerakan putar di sumbu Y, hidung drone naik atau turun (nukik).
3. Yaw: Gerakan putar di sumbu Z, hidung drone noleh ke kiri atau kanan.
4. Air Speed: Kecepatan UAV terhadap udara di sekitarnya.
5. Ground Speed: Kecepatan UAV terhadap permukaan tanah.
6. HDOP (Horizontal Dilution of Precision): Nilai presisi sebuah GPS secara horizontal.
7. VDOP (Vertical Dilution of Precision): Nilai presisi sebuah GPS secara vertikal.

## C. Komponen UAV
1. Flight Controller (FC): Otak UAV
2. GPS Module: Memberikan koordinat untuk navigasi waypoint 
3. Propulsion System (ESC + Motor + Propeller): ESC (Electronic Speed Controller) mengatur putaran motor berdasarkan perintah FC
4. Battery & PDB: Sumber daya distribusi listrik.
5. Telemetry Radio: Kirim data (ketinggian, baterai, posisi) dari UAV ke laptop di darat (Ground Control Station)
6. RC Receiver: Menerima perintah manual dari pilot (jaga-jaga jika autopilot gagal)
7. Payload (Kamera): Kamera mengambil foto

### Diagram Blok
/src/a/5/diagram_blok.png

## D. Review Jurnal Ilmiah
Link dokumen: /src/a/5/Vision_Based_Drone_Obstacle_Avoidance.pdf
Rangkuman:
Penelitian ini mengusulkan metode Deep Reinforcement Learning (DRL) menggunakan algoritma Soft-Actor-Critic (SAC) yang dikombinasikan dengan Variational Auto-Encoder (VAE) untuk melatih drone menghindari rintangan secara otomatis. Dengan menggunakan depth mapping sebagai input visual, model ini memanfaatkan VAE untuk mengompresi informasi gambar yang kompleks menjadi fitur dimensi rendah, sehingga memungkinkan proses pelatihan yang lebih ringan dan jauh lebih cepat dibandingkan metode lainnya. Berdasarkan pengujian dalam simulator Airsim, drone yang dilatih berhasil mencapai tingkat keberhasilan menghindari rintangan sebesar 90% di lingkungan pelatihan, serta mempertahankan kemampuan adaptasi di atas 70% pada lingkungan baru yang direkonstruksi tanpa perlu pelatihan ulang. Selain itu, penerapan teknik delay learning dan penggunaan replay buffer yang terbagi antara pengalaman sukses dan reguler terbukti menstabilkan proses pembelajaran dan meningkatkan efisiensi pemilihan strategi oleh LLM yang telah dilatih.

# 6. Algoritma
## a. A* (A-star) dan D* (D-star)
### A Star
Dari apa yang saya pelajar ini adalah metode dalam path planning yang bertujuan untuk mencari rute terpendek dari titik awal ke titik tujuan. Algoritma A Star sendiri menggabungkan Djikstra dan Greedy Best-First-Search.
Kapan Digunakan? Digunakan ketika peta diketuahui sepenuhnya dan tidak berubah sama sekali selama pergerakan
Rumus: f(n) = g(n) + h(n)
Contoh: GOogle Maps, Navigasi UAV di lingkungan tertentu

### D Star
Dari apa yang saya pelajar ini adalah metode dalam path planning yang bertujuan untuk mencari rute terpendek dari titik awal ke titik tujuan. Namun, yang membuat D Star berbeda adalah ini algoritma untuk lingkungan yang memang dinamis dan mungkin peta belum diketahui secara sepenuhnya
Analogi: Jika robot sedang bergerak menggunakan rute A Star dan tiba-tiba menemukan tembok baru yang tidak ada di peta, A Star harus menghitung ulang dari awal. D Star, sebaliknya, hanya menghitung ulang bagian yang terdampak oleh perubahan tersebut, sehingga jauh lebih efisien secara komputasi.
Contoh: Mars Rover

### Referensi
Russell, S., & Norvig, P. (2020). Artificial Intelligence: A Modern Approach (4th ed.). Pearson. (Bab tentang Search Algorithms)

## b. Proportional-Integral-Derivative (PID)
PID adalah algoritma untuk control looping feedback. Tujuannya adalah untuk menjaga sebuah variabel agar tetap stabil dengan nilai yang diinginkan.
Cara kerja: PID bekerja dengan menghitung nilai error, yaitu selisih antara nilai yang diinginkan setpoint dengan nilai aktual saat ini. Lalu, controller memberikan output correction berdasarkan proportional, intergral, derivative.
Kapan digunakan? Untuk drone bisa dengan menjaga keseimbangan agar drone tetap hovering meski terdorong oleh angin.

### Referensi
Dorf, R. C., & Bishop, T. L. (2013). Modern control systems. Pearson. (Bab tentang PID Controller)

## c. Kalman Filter dan Extended Kalman Filter (EKF) 
EKF adalah algoritma untuk state estimation. Sensor itu kadang - kadang data yang diambil kurang lengkap atau kurang akurat. Nah, Kalman Filter berfungsi untuk menebak posisi atau keadaan aktual dengan menggabungkan data dari sensor dan prediksi dari model fisika.
Cara kerja:  Predict -> Measurement
Kapan digunakan? Bisa digunakan untuk tracking radar melacak pesawat terbang yang bergerak lurus

### Referensi? Kali ini GEMINI Pro >w<




