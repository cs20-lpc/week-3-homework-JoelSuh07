#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "List.hpp"
#include <iostream>
using namespace std;

template <typename T>
class LinkedList : public List<T> {
    protected:
        // represents an element in the linked list
        struct Node {
            T value;
            Node* next;
            Node* prev;


            Node(T v , Node* n = nullptr, Node* p = nullptr)
            : value(v), next(n), prev(p) { }

            Node(T v = T(), Node* n =nullptr){
                value = v;
                next = n;
            }
        };

        // a pointer to the front of the list
        Node* head;

    public:
        // default constructor
        LinkedList();

        // destructor
        virtual ~LinkedList();

        // add the argument to the end of the list
        virtual void append(const T&) override;

        // remove all elements in the list, resetting to the initial state
        virtual void clear() override;

        // return the element at the given position (argument)
        virtual T getElement(int) const override;

        // return the current length of the list
        virtual int getLength() const override;

        // insert the given element (argument 2) at
        // the given position (argument 1)
        virtual void insert(int, const T&) override;

        // determine if the list currently empty
        virtual bool isEmpty() const override;

        // remove the element at the given position (argument)
        virtual void remove(int) override;

        // replace the element at the given position (argument 1) with
        // the value given (argument 2)
        virtual void replace(int, const T&) override;

        // overloaded stream insertion operator to make printing easier
friend ostream& operator<<(ostream& outStream, const LinkedList<T>& myObj) {
        if (myObj.isEmpty()) {
            outStream << "List is empty, no elements to display.\n";
        } else {
            // We use typename here because Node is a dependent type
            typename LinkedList<T>::Node* curr = myObj.head;
            while (curr != nullptr) {
                outStream << curr->value; // Calls Student's operator<<
                if (curr->next != nullptr) {
                    outStream << " --> ";
                }
                curr = curr->next;
            }
            outStream << endl;
        }
        return outStream;
    }

        virtual T* searchById(int id) const override;
};

#include "LinkedList.tpp"
#endif
