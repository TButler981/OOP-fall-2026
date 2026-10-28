#include "Box.hpp"

template <typename T>
const T& Box<T>::getValue() const{
    return value;
}

template <typename T>
void Box<T>::setValue(const T& v) {
    value = v;
}

template <typename T>
Box<T>::Box(const T& v) : value(v) {

}