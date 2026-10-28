#include <iostream>
#include <vector>

void print(const std::vector<int>& v);


int main(void){
    std::vector<int> v1; //Empty vector (dynamic array) of integers named v1
    //Create a vector with size and default values
    std::vector<int> v2(10, 1);
    //Create a vector using another vector
    std::vector<int> v3(v2);
    std::vector<int> v4{-2, 89, 700, 1000};

    print(v4);
    std::cout << "v4 size: " << v4.size() << std::endl;
    std::cout << "v4 first: " << v4.front() << std::endl;
    std::cout << "v4 last: " << v4.back() << std::endl;

    // Add element to the end
    v4.push_back(777);
    print(v4);

    //remove from the end
    v4.pop_back();
    print(v4);

    // Iterator - object that points to a certain location in the vector
    // begin() - points to the first element
    // end() - points to the location after the last element

    std::cout << "v4.begin" << *v4.begin() << std::endl;
    std::cout << "v4.begin + 2: " << *(v4.begin() + 2) << std::endl;

    //insert(location(iterator), value)
    v4.insert(v4.begin() + 1, 900);
    print(v4);
    //TODO add 111 into the middle

    //Erase(location)
    v4.erase(v4.begin() + 2);
    print(v4);

    return 0;
}

void print(const std::vector<int>& v) {
    std::cout << "[ ";
    for (int e : v) {
        std::cout << e << " ";
    }
    std::cout << "]\n";
}