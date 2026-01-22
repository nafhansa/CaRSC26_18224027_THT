class Baterai {
private:
    // Atribut level tidak bisa diakses langsung dari luar
    int level; 

public:
    void setLevel(int l) {
        if (l >= 0 && l <= 100) level = l;
    }
    int getLevel() { return level; }
};