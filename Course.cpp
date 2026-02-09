// TODO:  Course class methods implementation here.
#include "Course.hpp"

//constructor
Course::Course(string n, int l) 
: name(n), location(l), nextCourse(nullptr) {}

//destructor
Course::~Course() {}

string Course::getName() const{return name;};
int Course::getLocation() const{return location;};
Course* Course::getNextCourse() const{return nextCourse;};

void Course::setNext(Course* nextCourse){
    this->nextCourse = nextCourse;
}