#include <iostream>
#include <string>

#include "Car.hpp"


Car::Car(){
    make = "-";
    model = "-";
    year = 1900;
    mpg = 0.0;
}
Car::Car(const std::string& mk, const std::string& mo, int yr, double car_mpg){
    setMake(mk);
    setModel(mo);
    setYear(yr);
    setMPG(car_mpg);
}
void Car::printInfo() const{
    std::cout << "Make\t\t" << make << std::endl;
    std::cout << "Model\t\t" << model << std::endl;
    std::cout << "Year\t\t" << year << std::endl;
    std::cout << "MPG\t\t" << mpg << std::endl;
}
void Car::setMake (const std::string mk){
    make = mk;
}
void Car::setModel (const std::string mo){
    model = mo;
}
void Car::setYear(int yr){
    year = (yr >= 1900 && yr <= 2026) ? yr : 1900;
}
void Car::setMPG(double new_mpg){
    mpg = (new_mpg > 0) ? new_mpg : 0;
}