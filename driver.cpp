#include <iostream>
#include <string>
#include "Student.hpp"
#include "Course.hpp"
// TO DO:
// If you want to use the LinkedList code you wrote in Week 4 Mon Lab for creating list
// include LinkedList.hpp here and also add it both LinkedList.hpp and LinkedList.tpp to this repository.

using namespace std;

void printMenu() {
    cout << "\n--- LinkedList Menu ---" << endl;
    cout << "1. Append Student" << endl;
    cout << "2. Remove a Student by ID" << endl;
    cout << "3. Get Student Details by ID" << endl;
    cout << "4. Display all Students" << endl;
    cout << "5. Count Students" << endl;
    cout << "6. Add a Course" << endl;
    cout << "7. Exit" << endl;
    cout << "Choice (1-7): ";
}

int main()
{
  // TO DO: Insert your code to display a menu for user to select to add/delete/view Student and course information.

    // Create the head of the student list
    Student* studentHead = new Student(1, "Alice", 4);
    
    // Create a second student and link them
    Student* secondStudent = new Student(2, "Bob", 3);
    studentHead->setNext(secondStudent);
    secondStudent->setPrev(studentHead);

    // Add courses to Alice
    studentHead->addCourse("CS101", 101);
    studentHead->addCourse("Math202", 305);

    // Print Alice's info
    studentHead->printStudent();

    // Cleanup: You'll need to loop through students and delete them
    delete studentHead; 
    delete secondStudent;
    

    return 0;
}
