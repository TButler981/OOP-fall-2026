#include <iostream>
#include <string>

//Header file. Keeps the definition of the class. No implementation.

class Car {
public:
    //No argument constructor
    Car();

    void printInfo() const;

    //TODO Implement setters and getters

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
};
