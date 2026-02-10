// TODO:  Course class methods implementation here.
#include "Course.hpp"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& os, const Course& c) {
    os << "[" << c.courseName << " at " << c.location << "]";
    return os;
}