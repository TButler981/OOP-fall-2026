#ifndef BOX_HPP
#define BOX_HPP

// Template class
template <typename T>
class Box{
public:
    Box(const T& v);

    // Setter
    void setValue(const T& v);

    // Getter
    const T& getValue() const;
private:
    T value;

};

#include "Box.tpp"


#endif