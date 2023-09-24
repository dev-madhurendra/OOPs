/*
    Default Constructor :
        - A default constructor is a constructor that is automatically provided by 
          the C++ compiler if no constructor is explicitly defined within a class. 
          It initializes the object with default values or performs no initialization 
          at all, depending on how it's implemented.
*/
#include <iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called." << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj; // Default constructor is called automatically
    // Output will be Default constructor called.
    
    return 0;
}
