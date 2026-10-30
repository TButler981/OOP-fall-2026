#include "Point.hpp"
#include <iostream>


int main (void) {
    Point p1(4, 5, "p1");
    Point p2(6, 4, "p2");
    Point p3(81, 85, "p3");

    std::cout << p1.toString() << std::endl;

    if (p1 != p2) {
        std::cout << (char) p3[0];
    }
    else{
        std::cout << (char) p3[1];
    }
    std::cout << (char) p1[0] << std::endl;

    //Test ++ operator
    ++++p1;

    std::cout << p1.toString() << std::endl;

    Point p4 = p1++ + ++p2;

    std::cout << p4.toString() << std::endl;

    //test +=

    p4 += p1;

    std::cout << p4.toString() << std::endl;

    //test -+
    p4 -= p1;

    std::cout << p4.toString() << std::endl;

    

    return 0;
}