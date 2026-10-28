#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector{
public:
    Vector(int capacity = 10);

    //copy constructor
    Vector(const Vector& other);

    ~Vector();

    void push_back(int val);
    void print() const;

    void pop_back();
    bool empty() const;
    int at(int index) const;


private:
    bool full() const;
    void allocateMemory(int new_capacity);

    int* data;      //an array of integers
    int size;       //the number of elements
    int capacity;   //the max number of elements in the vector
};



#endif