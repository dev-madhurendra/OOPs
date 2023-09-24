/*
    In multilevel inheritance, a derived class inherits from another derived class. 
    This creates a chain of inheritance.

    class c inherits class B
    class B inherites class A
    C <- B <- A

    [ <- ] : inheritence 

*/
#include<iostream>
using namespace std;

class Grandparent {
public:
    int grandparentData;
};

class Parent : public Grandparent {
public:
    int parentData;
};

class Child : public Parent {
public:
    int childData;
};

int main() {
    // Create an object of the Child class
    Child childObj;

    // Assign values to data members inherited from Grandparent, Parent, and Child
    childObj.grandparentData = 42;
    childObj.parentData = 24;
    childObj.childData = 12;

    // Display the values of data members
    cout << "Grandparent Data: " << childObj.grandparentData << endl;
    cout << "Parent Data: " << childObj.parentData << endl;
    cout << "Child Data: " << childObj.childData << endl;

    return 0;
}
