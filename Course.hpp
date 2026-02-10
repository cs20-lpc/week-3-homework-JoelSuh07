// TODO:  Course class definitins go here.
#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
using namespace std;

class Course{
    public:
        string courseName;
        int location;

        // default constructor
        Course() : courseName(""), location() {}
        Course(string name, int loc) : courseName(name), location(loc) {}

        // destructor
        ~Course() { };


};

struct CourseNode {
    Course data;
    CourseNode* next;
    CourseNode(string name, int loc) : data(name, loc), next(nullptr) {}
};

ostream& operator<<(ostream& os, const Course& c);


#endif