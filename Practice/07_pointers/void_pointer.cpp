#include<iostream>

int main(void) {
    // casting from one type to another
    // static_cast<new_type>(expression)

    int number = 21;
    double pi = 3.1415;

    // Create a void pointer
    void* ptr = nullptr;

    //assign ptr with the address of int
    ptr = &number;

    std::cout << "Int value " << *static_cast<int*>(ptr) << std::endl;

    //assign ptr with the address of double
    ptr = &pi;

    std::cout << "double value " << *static_cast<double*>(ptr) << std::endl;

    return 0;
}