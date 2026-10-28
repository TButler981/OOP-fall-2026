#include <iostream>
#include <string>
#include <vector>

//template function
template <typename T>
T smallest(const T& v1, const T& v2, const T& v3) {
    if (v1 <= v2 && v1 <= v3) {
        return v1;
    }
    else if (v2 <= v3) {
        return v2;
    }
    else {
        return v3;
    }
}

template <typename T1, typename T2>
void displayPair(const T1& first, const T2& second) {
    std::cout << "(" << first << " : " << second << ")" << std::endl;
}

template <typename T>
T findMax(const std::vector<T> &v){
    if (v.empty()) {
        return T(); //T() default template value
        //throw an exception
        throw std::string ("findMax: empty vector");
    }
    
    T max = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main(void) {
    int i1 = 1, i2 = -2, i3 = 100;
    //print the smallest value

    std::cout << "smallest int: " << smallest(i1, i2, i3) << std::endl;
    double d1 = 1.5, d2 = -1.7, d3 = 100.5;
    std::cout << "smallest double: " << smallest(d1, d2, d3) << std::endl;
    std::string s1 = "hi", s2 = "bye", s3 = "lie";
    std::cout << "smallest string: " << smallest(i1, i2, i3) << std::endl;

    //test displayPair
    displayPair(i1, d2);
    displayPair(i2, s2);
    displayPair(i2, i1);

    //test findMax
    std::vector<int> v1 {1,-2,20,102};
    std::cout << "Int max: " << findMax(v1) << std::endl;
    std::vector<char> v2 {'a','G','!','f'};
    std::cout << "Char max: " << findMax(v2) << std::endl;

    std::vector<double> v3;
    std::cout << "double max: " << findMax(v3) << std::endl;

    return 0;
}