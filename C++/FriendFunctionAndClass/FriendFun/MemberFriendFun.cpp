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
                We can also declare a member function of another class as a friend function 
                in C++. The following example demonstrates how to use a member function of 
                another class as a friend function in C++:

*/


/*
    The order in which we define the friend function of another class is important 
    and should be taken care of. We always have to define both the classes before 
    the function definition. Thats why we have used out of class member function 
    definition.
*/
class Person;  // Forward declaration

class Friend {
public:
    void introduce(const Person& person);
};

class Person {
private:
    string name;
    int age;

protected:
    string address;

public:
    Person(const string& n, int a, const string& addr)
        : name(n), age(a), address(addr) {}

    // Friend function declaration
    friend void Friend::introduce(const Person& person);
};

// Friend function definition to introduce a person
void Friend::introduce(const Person& person) {
    cout << "Hello, my name is " << person.name << "." << endl;
    cout << "I am " << person.age << " years old." << endl;
    cout << "I live at " << person.address << "." << endl;
}

int main() {
    // Create a Person object
    Person person1("Alice", 30, "123 Main St");

    // Create a Friend object
    Friend friend1;

    // Use the friend function to introduce the person
    friend1.introduce(person1);

    return 0;
}
