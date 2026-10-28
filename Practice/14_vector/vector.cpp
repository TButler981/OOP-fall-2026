#include "vector.hpp"
#include <iostream>

Vector::Vector(int cap) : capacity(cap), size(0){
    std::cout << "The constructor was called: " << this << std::endl;
    //dynamically create an array
    data = new int[capacity];
}

Vector::Vector(const Vector& other) : capacity(other.capacity), size(other.size){
    std::cout << "The copy constructor was called :" << this << std::endl;
    data = new int[capacity];
    //copy the elements
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

Vector::~Vector(){
    std::cout << "The destructor was called: " << this << std::endl;
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
        allocateMemory(capacity * 2);
        
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

void Vector::allocateMemory(int new_capacity) {
    std::cout << "Current capacity: " << capacity << std::endl;
    capacity = new_capacity;
    int* old_data = data;

    //create a new array
    data = new int[capacity];

    //copy the elements into a new array
    for (int i = 0; i < size; i++) {
        data[i] = old_data[i];
    }

    //deallocate the memory
    delete [] old_data;
}

void Vector::pop_back() {
    if (empty()){
        return;
    }
    if (size < capacity / 2) {
        allocateMemory(capacity / 2);
    }
    size--;
}

bool Vector::empty() const {
    return size == 0;
}

int Vector::at (int index) const {
    if (index < 0 || index >= size) {
        std::cout << "at: out of boundaries\n\n";
        return -99999;
    }
    return data[index];
}