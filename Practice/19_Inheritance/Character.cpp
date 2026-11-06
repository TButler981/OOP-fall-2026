#include <iostream>
#include <string>

class Character {
public:
    Character(const std::string& name, int health);
    ~Character();

    std::string name;
    int health;

    virtual void printInfo() const;

private:

};

class Warrior : public Character {
public:
    Warrior(const std::string& name, int health, int armor);
    ~Warrior();

    int armor;

    void printInfo() const;

private:

};

class EliteWarrior : public Warrior {
public:
    EliteWarrior(const std::string& name, int health, int armor, int level);

    int level;

    void printInfo() const;

private:

};


int main(void){

    //create a character object dynamically
    Character* chara = new Character("Gilbert", 1);

    //set characters name and health
    // chara->name = "Gilbert";
    // chara->health = 1;

    chara->printInfo();

    delete chara;

    //create a warrior
    Warrior warrior("Conan", 100, 50);
    // warrior.name = "Conan";
    // warrior.health = 100;
    // warrior.armor = 50;

    warrior.printInfo();

    EliteWarrior herbert("herbie", 100, 100, 3);

    Character* ch = &herbert;

    Character* fellas[2] = {&warrior, &herbert};

    for (int i = 0; i < 2; i++){
        fellas[i]->printInfo();
    }

    return 0;
}

void Character::printInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
}
void Warrior::printInfo() const {
    // Call the base class method
    Character::printInfo();
    std::cout << "Armor: " << armor << std::endl;
}

Character::Character(const std::string& name, int health) : name(name), health(health) {
    std::cout << "character constructor" << std::endl;
}
Warrior::Warrior(const std::string& name, int health, int armor) 
    : Character(name, health), armor(armor) {
    std::cout << "Warrior constructor for " << name << std::endl;
}

Character::~Character() {
    std::cout << "Character destructor\n";
}

Warrior::~Warrior() {
    std::cout << "Warrior destructor\n";
}

EliteWarrior::EliteWarrior(const std::string& name, int health, int armor, int level) 
    : Warrior(name, health, armor), level(level) { //calling the base class constructor
    std::cout << "EliteWarrior constructor\n";

    }

void EliteWarrior::printInfo() const {
    // Call the base class method
    Warrior::printInfo();
    std::cout << "level: " << level << std::endl;
}