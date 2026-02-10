// TODO:  Course class definitins go here.
#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
using namespace std;

class Course{
    private:
        string courseName;
        int location;
        Course* nextCourse;

    public:

        // default constructor
        Course() : courseName(""), location() {}
        Course(string name, int loc) : courseName(name), location(loc) {}

        // destructor
        ~Course() { };

};




#endif