// TODO:  Course class definitins go here.
#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
using namespace std;

class Course{
    private:
        string name;
        int location;
        Course* nextCourse;

    public:

        // default constructor
        Course(string name, int location);

        // destructor
        ~Course() { };

        //Getters
        string getName() const;
        int getLocation() const;
        Course* getNextCourse() const;

        //Setters
        void setNext(Course* nextCourse);

}




#endif