#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{
    public:
        Student(const std::string& n, double st_gpa);

        bool canGraduate() const;
        void printStudentInfo() const;
        //static method
        static double getRequiredGPA();
        static int getTotalStudents();
        static void setRequiredGPA(double new_gpa);
        static double gpa_average();
        static double getTotalGPA();

        /*
        TODO
        1) Create the property holding total_gpa
        2) Create a method which returns an average GPA of all students
        */

    private:
        std::string name;
        double gpa;
        std::string id;

        static double required_gpa;  //required GPA for graduation
        static int total_students;   //the total number of students
        static int next_id;          //the next student id value
        static double total_gpa;
};



#endif