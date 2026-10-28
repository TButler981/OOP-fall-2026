#include "Point.hpp"
#include <iostream>


int main (void) {
    Point p1(4, 5);
    Point p2(6, 4);
    Point p3(81, 85);

    std::cout << p3.toString() << std::endl;

    if (p1 != p2) {
        std::cout << (char) p3[0];
    }
    else{
        std::cout << (char) p3[1];
    }
    p1[0] = 40 + 47;
    std::cout << (char) p1[0] << std::endl;

    p1[1] = p1[1] + 4;
    p2[1] = p2[1] + 3;

    Point p4 = p1 * p2;
    std::cout << (char) (p4[1] - 12) << std::endl;

    return 0;
}