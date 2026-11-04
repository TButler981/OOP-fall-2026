#include <iostream>
#include <string>

class Character {
public:
    std::string name;
    int health;

    void printInfo() const;

private:

};

class Warrior : public Character {
public:
    int armor;

    void printInfo() const;

private:

};


int main(void){

    //create a character object dynamically
    Character* chara = new Character;

    //set characters name and health
    chara->name = "Gilbert";
    chara->health = 1;

    chara->printInfo();

    delete chara;

    //create a warrior
    Warrior warrior;
    warrior.name = "Conan";
    warrior.health = 100;
    warrior.armor = 50;

    warrior.printInfo();

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