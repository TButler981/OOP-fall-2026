#include <iostream>

class Gun {
public:
    int max_magazine = 20;
    int current_magazine = max_magazine;
    virtual void shoot() {
        std::cout << "bang" << std::endl;
    }
    virtual void reload(int bullets);
    //TODO implement reload

};

class MachineGun : public Gun {
public:
        int magazine = 20;
        void shoot() override {
            while (current_magazine > 0) {
                std::cout << "BANG! ";
                current_magazine--;
            }
            std::cout << std::endl;
        }
};

class Player {
public:
    void shoot(Gun& gun) {
        gun.shoot();
    }
};

int main(void) {
    MachineGun mg;
    Gun& gun = mg;

    Player p;
    p.shoot(mg);
    p.shoot(gun);

    return 0;
}