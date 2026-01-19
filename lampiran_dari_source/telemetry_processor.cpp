#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

struct TelemetryData {
    float altitude;
    float speed;
    float battery;
};

void process_telemetry(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "error membuka " << filename << std::endl;
        return;
    }

    std::vector<TelemetryData> data_list;
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        TelemetryData data;
        if (iss >> data.altitude >> data.speed >> data.battery) {
            data_list.push_back(data);
        }
    }
    file.close();

    float total_altitude = 0.0f;
    float total_speed = 0.0f;
    float total_battery = 0.0f;
    int count = data_list.size();

    for (const auto& data : data_list) {
        total_altitude += data.altitude;
        total_speed += data.speed;
        total_battery += data.battery;

        if (data.battery < 20.0f) {
            std::cout << "Low battery alert: " << data.battery << "%" << std::endl;
        }
        if (data.altitude > 100.0f) {
            std::cout << "High altitude alert: " << data.altitude << "m" << std::endl;
        }
    }

    float avg_altitude = (count > 0) ? total_altitude / count : 0.0f;
    float avg_speed = (count > 0) ? total_speed / count : 0.0f;
    float avg_battery = (count > 0) ? total_battery / count : 0.0f;

    std::cout << "avg altitude: " << avg_altitude << "m" << std::endl;
    std::cout << "avg speed: " << avg_speed << " m/s" << std::endl;
    std::cout << "avg battery: " << avg_battery << "%" << std::endl;
}

int main() {
    process_telemetry("lampiran/telemetry_data.txt");
    return 0;
}