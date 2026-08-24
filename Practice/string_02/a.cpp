#include <iostream>
#include <string>

int main(void){

    std::string name, animal;

    std::cout << "please enter your name: ";
    getline(std::cin, name);
    
    std::cout << "please enter your favorite animal: ";
    getline(std::cin, animal);

    std::string introduction = "agent " + name;
    introduction += ", also known as the " + animal + ".";

    std::cout << '\n' << introduction << std::endl;
    std::cout << "Your identity contains " << introduction.size() << std::endl;
    
    return 0;
}

