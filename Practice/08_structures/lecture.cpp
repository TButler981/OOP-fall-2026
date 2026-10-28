#include <iostream>
#include <string>
#include <iomanip>

//define our own data type. Create the structure
struct Lecture{
    std::string title;
    int duration;

    //create a method for the structure
    void print() {
        std::cout << std::setw(15) << std::left << "Title : " << title << std::endl;
        std::cout << std::setw(15) << std::left << "Duration : ";
        std::cout << duration / 60 << " minutes and ";
        std::cout << duration % 60 << " seconds" << std::endl;
        std::cout << std::setw(15) << std::left << "Long lecture : ";
        std::cout << (isLong() ? "YES" : "NO") << std::endl;
    }

    bool isLong() {
        return (duration > 60 * 60);
    }
};

void printLecture(const Lecture& lec);
Lecture createLecture(const std::string& title, int duration);


int main(void){
    int a; //creates a variable (object) of type int named a
    
    Lecture oop; //create a variable (object) of type Lecture named oop
    //initialize data members
    oop.title = "Classes and Objects";
    oop.duration = 50 * 60;

    std::cout << oop.title << " " << oop.duration << std::endl;
    
    //create and initialize
    Lecture math {"Graphs", 75 * 60};
    //print lecture info with function
    // printLecture(math);
    math.print();

    Lecture english = createLecture ("Alphabet", 35 * 60);
    english.print();

    return 0;
}

void printLecture(const Lecture& lec){
    std::cout << std::setw(15) << std::left << "Title : " << lec.title << std::endl;
    std::cout << std::setw(15) << std::left << "Duration : ";
    std::cout << lec.duration / 60 << " minutes and ";
    std::cout << lec.duration % 60 << " seconds" << std::endl;
}

Lecture createLecture(const std::string& title, int duration){
    Lecture lecture;
    lecture.title = title;
    lecture.duration = duration;

    return lecture;
}
