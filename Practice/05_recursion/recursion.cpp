#include <iostream>

void countdown(int n);
void countup (int n);

int power(int base, int exp);// TODO Implement negative exponents

void printbinary(int num);
void print_base(int num, int base); //TODO where base is less then 10

int main(void){
    //countdown(10);
    //countup(10);
    
    //power(2, 6);

    printbinary(16);
    std::cout << std::endl;
    return 0;
}

void countdown (int n) {
    //Base case
    if (n <= 0) {
        std::cout << 0 << "happy new year!!!!!\n";
        return;
    }
    std::cout << n;
    countdown (n - 1);
}
void countup (int n) {
    if (n <= 0) {
        std::cout << 0;
        return;
    }
    countup (n - 1);
    std::cout << n;
}

int power(int base, int exp){
    if (exp == 0){
        printf("i am power (%d,%d). I know the answer is 1\n", base, exp);
        return 1;
    }

    printf("I am power(%d,%d).\n", base, exp);
    printf("I remember %d and ask power(%d, %d) for help!\n",base, base, exp);
    int help = power(base, exp - 1);
    printf("I am power(%d,%d).\n", base, exp);
    printf( "power(%d, %d) returned me %d.\n", base, exp - 1, help);
    printf("I will do %d * %d = %d and return the result\n", base, help, base * help);
    return base * help;
}

void printbinary(int num){
    if (num == 0) {
        return;
    }
    printbinary(num / 2);
    std::cout << num % 2;
}