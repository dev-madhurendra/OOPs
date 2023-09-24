/*
    Public Access Modifier:
        - Members declared as public are accessible from anywhere, both within 
          the class and from external code.
        - Public members are part of the class's interface, and they can be used 
          to interact with objects of the class.
*/

#include<iostream>
using namespace std;
class MyClass {
public:
    int publicVar; // Public data member

    void publicMethod() {
        // Public member function
    }
};

int main() {
    MyClass obj;
    obj.publicVar = 42;     // Accessing public data member
    obj.publicMethod();     // Calling public member function
    return 0;
}
