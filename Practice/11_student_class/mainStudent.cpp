#include "Student.hpp"
#include <iostream>

int main(void) {
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;
    
    Student st_bob("Bob", 3.1);
    Student st_alice("Alice", 2.4);

    st_bob.printStudentInfo();
    st_alice.printStudentInfo();

    for (int i = 0; i < 10; i++) {
        Student test("Test", 1.0);
        // Work with test student...
    }

    std::cout << "Required GPA: " << Student::getRequiredGPA() << std::endl;
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;
    std::cout << "Total GPA: " << Student::getTotalGPA() << std::endl;
    std::cout << "Average GPA: " << Student::gpa_average() << std::endl;

    return 0;
}