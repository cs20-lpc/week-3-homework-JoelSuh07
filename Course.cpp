// TODO:  Course class methods implementation here.
#include "Course.hpp"

friend ostream& operator<<(ostream& os, const Course& c) {
    os << "[" << c.courseName << " at " << c.location << "]";
    return os;
}

