#include <iostream>
#include <string>
using namespace std;

/*
        Constructor Overloading means when we have two or more constructors but change in number of parameters,
        or change in order of parameters, or change in data types of parameters are present

        Overloaded Costructor : 
            1.constructor  overloading is when we overload default constructor and 
            parameterized constructor like this

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

    // Constructor can also be overloaded by changing order of parameters of constructor
    Student(int studentRollNumber, const string& studentName, int studentAge){
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
    Student student4(12,"Lucky",15); // Constructor with roll number, name and age (by changing order of parameters);

    // Display student information
    cout << "Student 1:\n";
    student1.display();
    cout << "\nStudent 2:\n";
    student2.display();
    cout << "\nStudent 3:\n";
    student3.display();
    cout<<  "\nStudent 4:\n";
    student4.display();

    return 0;
}
