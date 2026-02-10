#include <iostream>
#include <string>
#include "Student.hpp"
#include "LinkedList.hpp"
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
    LinkedList<Student> studentList;
    int choice, id, loc;
    string name, cName;
    double gpa;


    while (true) {
    printMenu();
      cin >> choice;
      if (choice == 0) break;

  try {
    if (choice == 1) {
        cout << "Enter ID, Name, GPA: ";
        cin >> id >> name >> gpa;
        studentList.append(Student(id, name, gpa));
    } else if (choice == 2) {
        int pos;
        cout << "Enter position to remove: "; cin >> pos;
        studentList.remove(pos);
    } else if (choice == 3) {
        cout << "Enter ID: "; cin >> id;
        Student* s = studentList.searchById(id);
        if (s) cout << *s << endl;
        else cout << "Student not found." << endl;
    } else if (choice == 4) {
        cout << studentList; // Uses your overloaded operator<<
    } else if (choice == 5) {
        cout << "Total Students: " << studentList.getLength() << endl;
    } else if (choice == 6) {
        cout << "Enter Student ID: "; cin >> id;
        Student* s = studentList.searchById(id);
        if (s) {
            cout << "Enter Course Name and Location: ";
            cin >> cName >> loc;
            s->addCourse(cName, loc);
        } else cout << "Student not found." << endl;
    }
} catch (const exception& e) {
    cout << "Error: " << e.what() << endl;
}
}
return 0;
};
    
