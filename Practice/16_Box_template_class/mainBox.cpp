#include <iostream>
#include <string>
#include "Box.hpp"

int main(void) {
    //Create an object of template class Box
    Box<int> box(10);

    std::cout << box.getValue() << std::endl;

    Box<std::string> box_name("Bartholomew");

    std::cout << box_name.getValue() << std::endl;

    return 0;
}