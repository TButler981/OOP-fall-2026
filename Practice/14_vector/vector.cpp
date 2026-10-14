#include "vector.hpp"
#include <iostream>

Vector::Vector(int cap) : capacity(cap), size(0){
    //dynamically create an array
    data = new int[capacity];
}

Vector::~Vector(){
    if (data) {
        delete [] data;
    }
}

void Vector::push_back(int val){
    if(full()) {
        //double the capacity
        //create a new array with doubled capacity
        //move the elements from old array into a new one
        //deallocate old array
        capacity = capacity * 2;
        int new_data[capacity];
    }
    data[size] = val;
    size++;
}

void Vector::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << "]\n";
}

bool Vector::full() const {
    return size == capacity;
}
