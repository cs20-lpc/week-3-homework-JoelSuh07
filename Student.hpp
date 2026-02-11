// TO DO:  Student class definition  here.
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Course.hpp"
#include <iostream>
using namespace std;

class Student {
    protected:
        int id;
        string name;
        double gpa;
        int length;
        
        CourseNode* coursesHead; //head of the singly linked list of courses

    public:
        // constructor
        
        Student(int i = 0, string n ="", double gpa = 0.0)
            : id(i), name(n), gpa(gpa), coursesHead(nullptr) {}

        // destructor
        ~Student(){
            while (coursesHead) {
                CourseNode* temp = coursesHead;
                coursesHead = coursesHead -> next;
                delete temp;
            }
        };

        int getId() const {return id;}

        string getName() const {return name;}

        double getGpa() const {return gpa;}
        
        void addCourse(string cName, int loc);

        void display() const;

        // Overloaded for studentList display
        friend ostream& operator<<(ostream& os, const Student& s);
};




#endif