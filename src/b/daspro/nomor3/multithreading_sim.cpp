#include <iostream>
#include <thread>   // Buat multithreading
#include <chrono>   // Buat ngatur waktu/delay
#include <fstream>  // Buat baca file
#include <string>
#include <mutex>    // Biar output gak tabrakan (race condition)

using namespace std;

// Ini variabel global buat ngasih sinyal berhenti
bool keepRunning = true;

// Mutex buat ngunci cout biar rapih
mutex printLock;

// Thread 1: Simulasi Video (Jalan tiap 2 detik)
void taskVideo() {
    while (keepRunning) {
        // Simulasi delay nunggu frame video dateng
        this_thread::sleep_for(chrono::seconds(2));
        
        if (!keepRunning) break; // Cek lagi takutnya udah disuruh stop

        // Kunci dulu sebelum print biar gak diganggu thread lain
        lock_guard<mutex> guard(printLock);
        cout << "[Video Thread] Receiving video frame..." << endl;
    }
}

// Thread 2: Simulasi Telemetri (Jalan tiap 3 detik)
void taskTelemetry() {
    ifstream file("telemetry.txt");
    string line;
    
    if (!file.is_open()) {
        lock_guard<mutex> guard(printLock);
        cout << "[Error] File telemetry.txt gak ketemu!" << endl;
        return;
    }

    while (keepRunning && getline(file, line)) {
        this_thread::sleep_for(chrono::seconds(3));
        
        if (!keepRunning) break;

        lock_guard<mutex> guard(printLock);
        cout << "[Telemetry Thread] Data: " << line << endl;
    }
    
    file.close();
}

int main() {
    cout << "BAPP info Mesin Jalan nih!!" << endl;

    thread t1(taskVideo);
    thread t2(taskTelemetry);

    // Biarkan program jalan selama 10 detik di main thread
    this_thread::sleep_for(chrono::seconds(10));

    // Matiian loop di kedua thread
    keepRunning = false;

    cout << "\nStopping Threads...\n" << endl;

    // Gabungin thread balik ke main (tunggu mereka selesai bersih-bersih)
    if (t1.joinable()) t1.join();
    if (t2.joinable()) t2.join();

    cout << "Program ended" << endl;
    return 0;
}