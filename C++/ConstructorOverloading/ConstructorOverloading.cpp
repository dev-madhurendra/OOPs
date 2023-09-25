#include <iostream>
#include <string>
using namespace std;

/*
        
        Overloaded Costructor : 
            1.constructor  overloading is when we overload default constructor and 
            parameterized constructor lik this

        Default : 
            A(){
                name = "";
            }	

        Parameterized:
            A(string name_a){
                name = name_a;
            }

        Overloaded:
            A(string name_a = ""){
                name = name_a;
            }
*/

class Student {
private:
    string name;
    int rollNumber;
    int age;

public:
    // Constructor with no arguments (default constructor)
    Student() {
        name = "Unknown";
        rollNumber = 0;
        age = 0;
    }

    // Constructor with name and roll number
    Student(const string& studentName, int studentRollNumber) {
        name = studentName;
        rollNumber = studentRollNumber;
        age = 0; // Age is set to 0 by default
    }

    // Constructor with name, roll number, and age
    Student(const string& studentName, int studentRollNumber, int studentAge) {
        name = studentName;
        rollNumber = studentRollNumber;
        age = studentAge;
    }

    // Display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

int main() {
    // Create Student objects using different constructors
    Student student1; // Default constructor
    Student student2("Alice", 101); // Constructor with name and roll number
    Student student3("Bob", 102, 18); // Constructor with name, roll number, and age

    // Display student information
    cout << "Student 1:\n";
    student1.display();
    cout << "\nStudent 2:\n";
    student2.display();
    cout << "\nStudent 3:\n";
    student3.display();

    return 0;
}
