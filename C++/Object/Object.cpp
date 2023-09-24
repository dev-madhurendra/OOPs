/*
    Objects : 
        - An object is an instance of a class. 
        - Objects are the fundamental building blocks of OOP and are used to model and represent real-world entities or concepts in your program.
        
        Here are the key characteristics and concepts related to objects in C++ OOP:

            - Instance of a Class: 
                An object is created based on a class definition. 
                The class acts as a blueprint or template that defines the structure 
                (data members) and behavior (member functions) that objects of that 
                class will have.

            - Data and Behavior: 
                Objects encapsulate both data (attributes or properties) and 
                behavior (methods or functions). 
                The data represents the state of the object, while the behavior 
                defines the actions or operations that can be performed on the 
                object's data.

            - Instantiation: 
                Creating an object is referred to as "instantiating" the class. 
                When you create an object, memory is allocated for its data members, 
                and the constructor (a special member function) is called to initialize the object.

            - Identity: 
                Each object has a unique identity, which distinguishes it 
                from other objects. Even if two objects of the same class have 
                the same data values, they are still distinct objects with 
                separate memory locations.

            - Usage: 
                Objects are used to interact with the data and behavior defined by 
                the class. You can invoke methods on objects, access their data 
                members, and modify their state.
*/
#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    // data members
private:
    double length;
    double width;

public:
    // Constructor to initialize the object
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate and return the area
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate and return the perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Getter functions to access private data members
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }
};

int main() {
    // Creating two Rectangle objects
    // This is a one way of creating an object
    Rectangle rectangle1(5.0, 3.0);
    Rectangle rectangle2(4.0, 4.0);

    // Creating objects using new keyword
    // This is another way of creatin an object.
    Rectangle* rectangle3 = new Rectangle(4.0,6.0);

    // Accessing member functions to perform operations
    double area1 = rectangle1.calculateArea();
    double perimeter1 = rectangle1.calculatePerimeter();

    double area2 = rectangle2.calculateArea();
    double perimeter2 = rectangle2.calculatePerimeter();

    double area3 = rectangle3->calculateArea();
    double perimeter3 = rectangle3->calculatePerimeter();

    // Displaying results
    cout << "Rectangle 1:" << endl;
    cout << "Length: " << rectangle1.getLength() << " Width: " << rectangle1.getWidth() << endl;
    cout << "Area: " << area1 << " Perimeter: " << perimeter1 << endl;

    cout << "\nRectangle 2:" << endl;
    cout << "Length: " << rectangle2.getLength() << " Width: " << rectangle2.getWidth() << endl;
    cout << "Area: " << area2 << " Perimeter: " << perimeter2 << endl;

    cout << "\nRectangle 3:" << endl;
    cout << "Length: " << rectangle3->getLength() << " Width: " << rectangle3->getWidth() << endl;
    cout << "Area: " << area3 << " Perimeter: " << perimeter3 << endl;

    return 0;
}
