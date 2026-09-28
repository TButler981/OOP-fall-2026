//inclusion guard
#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include <string>

//Header file. Keeps the definition of the class. No implementation.


class Car {
public:
    //No argument constructor
    Car();
    Car(const std::string& mk, const std::string& mo, int yr, double car_mpg);

    void printInfo() const;

    //TODO Implement setters and getters
    void setMake (const std::string mk);
    void setModel (const std::string mo);
    void setYear(int yr);
    void setMPG(double new_mpg);

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
};

#endif