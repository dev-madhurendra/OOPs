/*
    Private Access Modifier:
        - Members declared as private are not accessible from outside the class, 
          even in derived classes.
        - Private members are used to encapsulate the internal implementation 
          details and protect them from external interference.
*/

#include<iostream>
using namespace std;

class MyClass {
private:
    int privateVar; // Private data member

public:
    // setter method
    void setPrivateVar(int val) {
        privateVar = val; // Accessible through a public member function
    }


    // getter method
    int getPrivateVar() {
        return privateVar; // Accessible through a public member function
    }
};

int main() {
    MyClass obj;
    obj.setPrivateVar(42);   // Accessing private data member indirectly
    int value = obj.getPrivateVar(); // Accessing private data member indirectly
    return 0;
}
