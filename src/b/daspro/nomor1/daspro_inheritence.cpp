class UAV { // Parent Class
public:
    void nyalakanMesin() { cout << "Mesin on"; }
};

class Quadcopter : public UAV { // Child Class mewarisi UAV sebagai Parent Class
public:
    void hover() { cout << "Hovering"; }
};