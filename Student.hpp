// TO DO:  Student class definition  here.
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Course.hpp"
#include <string>
using namespace std;

class Student {
    protected:
        int id;
        string name;
        double gpa;
        int length;
        
        CourseNode* coursesHead;

        Student* nextStudent;
        Student* prevStudent;

    public:
        // constructor
        
        Student(int i = 0, string n ="", double gpa = 0.0)
            : id(i), name(n), gpa(g), coursesHead(nullptr) {}

        // destructor
        ~Student(){
            while (coursesHead) {
                CourseNode* temp = coursesHead;
                coursesHead = coursesHead -> next;
                delete temp;
            }
        };

        int getId() const {return id;}
        void addCourse(string cName, string loc) {
            CourseNode* newNode = new CourseNode (cName, loc);
            newNode -> next = coursesHead;
            coursesHead = newNode;
        }
        void display() const;

        // Required so that LinkedList's operator<< works
        friend std::ostream& operator<<(std::ostream& os, const Student& s) {
            os << "{ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << " | Courses: ";
            CourseNode* curr = s.coursesHead;
            if (!curr) os << "None";
            while (curr) {
                os << curr->data << " ";
                curr = curr->next;
            }
            os << "}";
            return os;
        }
};



#endif