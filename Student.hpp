// TO DO:  Student class definition  here.
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Course.hpp"
#include <string>
using namespace std;

class Student {
    private:
        int id;
        string name;
        double gpa;
        int length;
        Course* courseHead;

        Student* nextStudent;
        Student* prevStudent;

    public:
        // default constructor
        Student();
        Student(int id, string name, double gpa);

        Student(const Student& other);
        Student& operator=(const Student& other);

        // destructor
        ~Student();

        int getId() const {return id;}
        void addCourse(string cName, string cloc);
        void display() const;
    
};



#endif