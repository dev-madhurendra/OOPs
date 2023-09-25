#include<iostream>
using namespace std;

/*


    Friend Function

        Like a friend class, a friend function can be granted special access to 
        private and protected members of a class in C++. They are the non-member 
        functions that can access and manipulate the private and protected members 
        of the class for they are declared as friends.

        A friend function can be:

            a) A global function
                We can declare any global function as a friend function. 
                The following example demonstrates how to declare a global 
                function as a friend function in C++:
            b) A member function of another class

*/

// Imagine a class representing a Person
class Person {
private:
    string name;  // Private member: name
    int age;          // Private member: age

protected:
    string address; // Protected member: address

public:
    Person(const string& n, int a, const string& addr)
        : name(n), age(a), address(addr) {}

    // Friend function declaration
    friend void displayPersonInfo(const Person& person);
};

// Friend function definition to display Person's info
void displayPersonInfo(const Person& person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << " years" << endl;
    cout << "Address: " << person.address << endl;
}

int main() {
    // Create a Person object
    Person person1("Alice", 30, "123 Main St");

    // Use the friend function to display the Person's info
    displayPersonInfo(person1);

    return 0;
}

