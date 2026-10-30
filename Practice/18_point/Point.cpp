#include "Point.hpp"
#include <cstring>

Point::Point(int x, int y, const std::string& tag) : x(x), y(y) {
    this->tag = new char[tag.size() + 1];

    //copy into tage
    strcpy(this->tag, tag.c_str());
}

std::string Point::toString() const{
    return std::string(tag) + ":^(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

bool Point::operator ==(const Point& other) const{
    return x == other.x && y == other.y;
}

bool Point::operator !=(const Point& other) const{
    //return x != other.x || y != other.y;
    return !(*this == other);
}

int& Point::operator [](int index){
    if (index == 0) {
        return x;
    }
    else{
        return y;
    }
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const {
    return Point(x * other.x, y * other.y);
}

Point& Point::operator++(){
    x++;
    y++;
    return *this;
}

Point& Point::operator--(){
    x--;
    y--;
    return *this;
}

Point Point::operator++(int){
    Point old(*this);

    x++;
    y++;
    return old;

    //return point(x++, y++);
}

Point& Point::operator+=(const Point& other){
    x += other.x;
    y += other.y;
    return *this;
}

Point& Point::operator-=(const Point& other){
    x -= other.x;
    y -= other.y;
    return *this;
}