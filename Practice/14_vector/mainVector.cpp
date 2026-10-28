#include "vector.hpp"
#include <iostream>

void func(Vector vec) {
    std::cout << "I will do nothing \n\n";
}

int main(void) {
    Vector v;
    std::cout << "Empty " << v.empty() << std::endl;
    for (int i = 0; i < 50; i++) {
        v.push_back(i);
    }
    func(v);
    v.pop_back();
    v.print();

    std::cout << v.at(4) << std::endl;
    std::cout << v.at(-4) << std::endl;

    return 0;
}