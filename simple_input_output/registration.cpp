#include <iostream>
using namespace std;

namespace student{
    int id;
}

namespace course{
    int id;
}

int main() {
    cout << "please enter student id: ";
    cin >> student::id;
    cout << "please enter course id: ";
    cin >> course::id;

    cout << "-----information-----" << endl;
    cout << "student id - " << student::id << endl;
    cout << "course id - " << course::id << endl;
    
    return 0;
}