#include <iostream>
#include <iomanip>
    //This library has stream manipulators that you can use to set float precision (which also rounds),
    //set width of an output, adjust prints to the left and right, etc.
    // using "fixed << setprecision(n)" will allow you to set the number of values after the decimal place
    // when using the setw() manipulator, it uses the right justification by default.
#include <ctime> // time
#include <ctime> //rand and srand


int main(void){
    srand(time(0)); //sets a seed
    int number1 = rand() % 10;          // this method of randomization is outdated since c++11 introduced the <random> library.
    int number2 = rand() % 10;          // std::mt19937 is used for general purpose randomness.

    return 0;
}