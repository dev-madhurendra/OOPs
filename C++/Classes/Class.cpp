#include<iostream>
using namespace std;
/*
	Class : 
		- A class is a blueprint or template for creating objects (instances).
		- It defines the structure and behavior of objects that will be created based on it.
		- A class encapsulates data (attributes) and functions (methods) that operate on that data into a single unit.
		- A class is a user-defined data type. It allows you to define a new data type based on the structure and behavior you define within the class. 

*/

// Here's the basic syntax for defining a class in C++:

class Person {

	// data members
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Public member functions
    void introduce() {
        cout << "Hello, I'm " << name << " and I'm " << age << " years old." << endl;
    }
};

int main() {
    Person alice("Alice", 30);
    alice.introduce();  // Output: Hello, I'm Alice and I'm 30 years old.
    return 0;
}
