#include <iostream>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b;}

int operate(int a, int b, int(*operation)(int, int)){
    return operation(a, b);
}

int main(void) {
    //pointer to a function syntax
    // Return type (*function_name)(parameters)

    std::cout << "Addition: " << operate(10, 15, add) << std::endl;
    std::cout << "Subtraction: " << operate(10, 15, subtract) << std::endl;
}