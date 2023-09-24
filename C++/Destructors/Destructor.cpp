/*
    Destructor ; 
        - A destructor in C++ is a special member function of a class that is 
          called when an object of the class goes out of scope or is explicitly 
          deleted. The destructor is responsible for releasing resources or 
          performing cleanup tasks associated with the object before it is 
          destroyed.
*/
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Member function to display person's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating a Person object
    Person person1("Alice", 25);
    
    // Accessing the object's member function
    person1.displayInfo(); // Output: Name: Alice  Age: 25
    
    // The destructor is automatically called when person1 goes out of scope
    return 0; // Destructor called for Alice
}
/*
    Output will be :
        Constructor called for Alice
        Name: Alice
        Age: 25
        Destructor called for Alice
*/