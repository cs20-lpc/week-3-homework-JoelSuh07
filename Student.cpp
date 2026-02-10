// TODO:  Student class methods implementation here.
#include "Student.hpp"
#include <iostream>

using namespace std;

void Student::addCourse(string cName, int loc) {
    CourseNode* newNode = new CourseNode(cName, loc);
    newNode->next = coursesHead; // Insert at head for O(1)
    coursesHead = newNode;
}

void Student::display() const {
    cout << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << "\nCourses: ";
    CourseNode* curr = coursesHead;
    if (!curr) cout << "None";
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

ostream& operator<<(ostream& os, const Student& s) {
    os << "{ID: " << s.id << ", Name: " << s.name << "}";
    return os;
}


