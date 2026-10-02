#include "Student.hpp"

int main(void) {
    Student st_bob("Bob", 3.1);
    Student st_alice("Alice", 2.4);

    st_bob.printStudentInfo();
    st_alice.printStudentInfo();

    return 0;
}