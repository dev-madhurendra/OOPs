/*
    Multiple Inheritence : 
        - In multilevel inheritance, a derived class inherits from another 
          derived class. This creates a chain of inheritance.

    class C inherits class A
    class B inherits class A

    C <- A
    B <- A

    [ <- ] : Inheritence


        
*/
#include<iostream>
using namespace std;

class Base1 {
public:
    int data1;
};

class Base2 {
public:
    int data2;
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "Data1: " << data1 << "\n" << ", Data2: " << data2 << endl;
    }
};

int main() {
    // Create an object of the Derived class
    Derived derivedObj;

    // Assign values to data members inherited from Base1 and Base2
    derivedObj.data1 = 42;
    derivedObj.data2 = 24;

    // Call the 'display' member function from the Derived class
    derivedObj.display(); // Output: Data1: 42, Data2: 24

    return 0;
}
