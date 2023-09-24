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
    }

    // Member function to display person's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating a Person object using the parameterized constructor
    Person person1("Alice", 25);
    
    // Accessing the object's member function
    person1.displayInfo(); // Output: Name: Alice  Age: 25
    
    // Creating another Person object with different values
    Person person2("Bob", 30);
    person2.displayInfo(); // Output: Name: Bob  Age: 30
    
    return 0;
}
