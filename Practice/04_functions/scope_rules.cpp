#include <iostream>

//Global variable
int x; // without initialization it defaults to 0

int f1(int b) {
    int n = b; //local variable
    n += 1;
    return n;
}
int f2(int b) {
    static  int n = b; //local variable
    n += 1;
    return n;
}


int main(void){
    //local variable
    //The code always goes for the closest scop definition of a variable.
    int x = 1;
    for (int i = 0; i < 10; i++){
        std::cout << "f1: " << f1(x) << std::endl;
        std::cout << "f2: " << f2(x) << std::endl;
    }

    return 0;
}