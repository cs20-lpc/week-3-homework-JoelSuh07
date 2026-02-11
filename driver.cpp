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
        if (!(cin >> choice)){
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }


        if (choice == 7) break;

        // REMOVE the try block here - it's not needed for the whole switch
        // Instead, add try-catch blocks inside individual cases where needed
        
        switch(choice) {
            case 1:
                cout << "Enter Student ID: ";
                cin >> id;
                cout << "Enter Student Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter GPA: ";
                cin >> gpa;
                try {
                    studentList.append(Student(id, name, gpa));
                    cout << "Student added successfully.\n";
                } catch(const exception& e) {
                    cout << "Error adding student: " << e.what() << endl;
                }
                break;
            
            case 2:
                cout << "Enter Student to remove by ID: ";
                cin >> id;
                try {
                    studentList.removeById(id); 
                    cout << "Student removed successfully.\n";
                } catch(const exception& e) {
                    cout << "Error removing student: " << e.what() << endl;
                }
                break;

            case 3:
                cout << "Enter Student ID to search: ";
                cin >> id;
                try {
                    Student* found = studentList.searchById(id);
                    if (found) {
                        found->display();
                    } else {
                        cout << "Student not found.\n";
                    }
                } catch(const exception& e) {
                    cout << "Error searching for student: " << e.what() << endl;
                }
                break;
                
            case 4:
                cout << "\n--- All Students ---\n";
                if (studentList.isEmpty()) {
                    cout << "No students in the list.\n";
                } else {
                    cout << studentList;  // Uses the overloaded << operator
                }
                break;
                
            case 5:
                cout << "Total students: " << studentList.getLength() << endl;
                break;
                
            case 6:
                cout << "Enter Student ID to add course to: ";
                cin >> id;
                cout << "Enter Course Name: ";
                cin.ignore();
                getline(cin, cName);
                cout << "Enter Location: ";
                cin >> loc;
                try {
                    Student* found = studentList.searchById(id);
                    if (found) {
                        found->addCourse(cName, loc);
                        cout << "Course added successfully.\n";
                    } else {
                        cout << "Student not found.\n";
                    }
                } catch(const exception& e) {
                    cout << "Error adding course: " << e.what() << endl;
                }
                break;
                
            default:
                cout << "Invalid choice. Please enter 1-7.\n";
                break;
        }
    }





  
return 0;
};
    
