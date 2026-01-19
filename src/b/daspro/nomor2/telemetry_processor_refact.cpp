#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

// Implementasi Encapsulation
class TelemetryData {
private:
    float altitude;
    float speed;
    float battery;

public:
    TelemetryData(float alt, float spd, float bat) : altitude(alt), speed(spd), battery(bat) {}

    // Getter untuk mengakses atribut yang memang hanya read-only
    float getAltitude() const { return altitude; }
    float getSpeed() const { return speed; }
    float getBattery() const { return battery; }
};

// Implementasi Interface Observer (Abstraction)
class ITelemetryListener {
public:
    virtual void onNewData(const TelemetryData& data) = 0;
    virtual ~ITelemetryListener() {}
};

// Implementasi Polymorphism x Observer
// Alerts
class SecurityAlertSystem : public ITelemetryListener {
public:
    void onNewData(const TelemetryData& data) override {
        // Cek Baterai
        if (data.getBattery() < 20.0f) {
            cout << "[ALERT] Low battery detected: " << data.getBattery() << "%" << endl;
        }
        // Cek Ketinggian
        if (data.getAltitude() > 100.0f) {
            cout << "[ALERT] High altitude danger: " << data.getAltitude() << "m" << endl;
        }
    }
};

// Stats
class PerformanceStats : public ITelemetryListener {
private:
    float totalAlt = 0, totalSpeed = 0, totalBat = 0;
    int dataCount = 0;

public:
    void onNewData(const TelemetryData& data) override {
        totalAlt   += data.getAltitude();
        totalSpeed += data.getSpeed();
        totalBat   += data.getBattery();
        dataCount++;
    }

    void printReport() {
        if (dataCount == 0) {
            cout << "No data to process." << endl;
            return;
        }

        cout << "\nFinal Performance Report" << endl;
        cout << "Avg Altitude : " << (totalAlt / dataCount) << " m" << endl;
        cout << "Avg Speed    : " << (totalSpeed / dataCount) << " m/s" << endl;
        cout << "Avg Battery  : " << (totalBat / dataCount) << " %" << endl;
    }
};

// Data processing (agar listener bisa baca dengan mudah)
class TelemetryFileReader {
private:
    vector<ITelemetryListener*> listeners;
    string filename;

public:
    TelemetryFileReader(string fname) : filename(fname) {}

    // Mendaftarkan pendengar (Observer)
    void attachListener(ITelemetryListener* listener) {
        listeners.push_back(listener);
    }

    // Memberitahu semua pendengar bahwa ada data baru
    void notifyAll(const TelemetryData& data) {
        for (auto* listener : listeners) {
            listener->onNewData(data);
        }
    }

    // Logika utama membaca file
    void process() {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error: Tidak bisa membuka file " << filename << endl;
            return;
        }

        cout << "Mulai memproses data telemetri...\n" << endl;

        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            float alt, spd, bat;
            if (ss >> alt >> spd >> bat) {
                TelemetryData newData(alt, spd, bat);
                notifyAll(newData);
            }
        }
        file.close();
    }
};

// Main Program
int main() {
    TelemetryFileReader processor("telemetry_data.txt");

    SecurityAlertSystem safetyCheck;
    PerformanceStats statsCalculator;

    processor.attachListener(&safetyCheck);
    processor.attachListener(&statsCalculator);

    processor.process();

    statsCalculator.printReport();

    return 0;
}