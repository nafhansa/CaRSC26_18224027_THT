class Sensor {
public:
    virtual void bacaData() { cout << "Baca sensor generic"; }
};

class Lidar : public Sensor {
public:
    void bacaData() override { cout << "Scan laser 3D"; } // Override method
};

// Contoh penggunaan
Sensor* s = new Lidar();
s->bacaData();