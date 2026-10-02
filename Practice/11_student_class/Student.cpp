#include "Student.hpp"
#include <iostream>

//initialize the static member (REQUIRED)
double Student::required_gpa = 2.5;

Student::Student(const std::string& n, double st_gpa) : name(n), gpa(st_gpa) {}
bool Student::canGraduate() const{
    return gpa >= required_gpa;
}

void Student::printStudentInfo() const{
    std::cout << "Name: " << name;
    std::cout << " | GPA: " << gpa;
    std::cout << " | Can graduate: " << (canGraduate() ? "YES" : "NO") << std::endl;
}
