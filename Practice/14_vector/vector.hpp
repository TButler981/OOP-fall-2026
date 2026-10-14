#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector{
public:
    Vector(int capacity = 10);
    ~Vector();

    void push_back(int val);
    void print() const;

    bool full() const;

private:
    int* data;      //an array of integers
    int size;       //the number of elements
    int capacity;   //the max number of elements in the vector
};



#endif