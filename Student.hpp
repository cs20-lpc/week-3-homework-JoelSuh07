// TO DO:  Student class definition  here.
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;

class Student {
    private:
        int id;
        string name;
        int gpa;
        int length;
        Course* coursesHead;

    public:
        // default constructor
        Student(int id, string name, int gpa, LinkedList<string> courses);

        // destructor
        ~Student() { }

        // add the argument to the end of the list
        void addStudent(const T&);

        // return the element at the given position (argument)
        T getStudent(int) const;

        // return the current length of the list
        int getLength() const;

        // remove the element at the given position (argument)
        void remove(int);
};



#endif