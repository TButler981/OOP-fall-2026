#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point{
public:

    //Todo()
    ~Point();
    Point(const Point& other);
    Point& operator=(const Point& other);

    Point(int x = 0, int y = 0, const std::string& tag  = "");
    std::string toString() const;

    //Logical operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    //Subscript operator
    int& operator[](int index);

    //arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;

    //Preincrement operator
    Point& operator++();

    //Predecrement operator
    Point& operator--();

    //Postincrement operator;
    Point operator++(int);

    //Postdecrement operator;
    Point operator--(int);

    //Arithmetic assignment operator
    Point& operator+=(const Point& other);
    Point& operator-=(const Point& other);

private:
    int x,y;
    char* tag;

};


#endif