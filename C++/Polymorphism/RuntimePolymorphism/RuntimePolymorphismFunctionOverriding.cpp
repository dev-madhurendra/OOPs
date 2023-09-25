#include<iostream>
using namespace std;
/*
    Polymorphism
        Polymorphism is a fundamental concept in C++ and object-oriented programming 
        (OOP) that allows objects of different classes to be treated as objects of a 
        common base class. It enables you to write more flexible and generic code by 
        abstracting away the specific implementation details of classes. There are two 
        main types of polymorphism in C++: compile-time (or static) polymorphism and 
        runtime (or dynamic) polymorphism. Here's an explanation and example code for 
        both types:

        (i) Compile-time (Static or Overloading or Early binding) Polymorphism:
            This type of polymorphism is resolved at compile time. 
            It is achieved through function overloading and operator overloading.


            (a) Function Overloading:
                Function overloading allows you to define multiple functions with 
                the same name but different parameter lists. The appropriate function 
                to be called is determined by the number and types of arguments at 
                compile time.
            
            (b) Operator Overloading:
                Operator overloading allows you to define the behavior of operators 
                for user-defined types. It enables you to use operators like 
                +, -, *, etc., with objects of custom classes.

        (ii) Runtime (Dynamic or Late binding or Overriding) Polymorphism:
            Runtime polymorphism is achieved through virtual functions and is 
            resolved at runtime. It allows you to call the appropriate method of 
            an object based on its actual type, even when accessed through a 
            pointer or reference to a base class.

            (a) Runtime Polymorphism with Data Members

            (b) Virtual Function

                A virtual function is a member function that is declared in the 
                base class using the keyword virtual and is re-defined (Overridden)
                in the derived class.Some Key Points About Virtual Functions:

                Virtual functions are Dynamic in nature. 
                They are defined by inserting the keyword virtual inside a base 
                class and are always declared with a base class and overridden in a 
                child class A virtual function is called during Runtime
*/

class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() {
        return 0.0; // Default implementation for the base class
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the virtual function for Circle
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the virtual function for Rectangle
    double calculateArea() override {
        return width * height;
    }
};

int main() {
    Shape* circle = new Circle(6.0);

    cout << "Area of circle : " << circle->calculateArea() << endl;


    Shape* shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.0);

    for (int i = 0; i < 3; i++) {
        cout << "Area of shape " << i+1 << ": " << shapes[i]->calculateArea() << endl;
        delete shapes[i];
    }

    return 0;
}
/*
    Output will be :
        Area of circle : 113.097
        Area of shape 1: 78.5397
        Area of shape 2: 24
        Area of shape 3: 28.2743
*/
