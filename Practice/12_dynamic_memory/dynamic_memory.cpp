#include <iostream>
void printArr(const int* arr, int size);
void doubleArr(int* arr, int size);
int* doubleArrNew(const int* arr, int size); //Return a new array with double values

const int SIZE = 5;

int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);

    doubleArr(arr, SIZE);
    printArr(arr, SIZE);

    int* new_arr = doubleArrNew(arr, SIZE);
    printArr(new_arr, SIZE);

    for (int i = 0; i < 99999; i++) {
        std::cout << i << std::endl;
        double* d_arr = new double[99999];
        delete [] d_arr; // deallocate the memory of dynamic array
    }

    return 0;
}

void printArr(const int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void doubleArr(int* arr, int size) {
    for (int i = 0; i < size; i++){
        arr[i] *= 2;
    }
}

int* doubleArrNew(const int* arr, int size){
    //int new_arr[SIZE]; //local array doesnt work

    //create a dynamic array
    int* new_arr = new int[size];

    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}