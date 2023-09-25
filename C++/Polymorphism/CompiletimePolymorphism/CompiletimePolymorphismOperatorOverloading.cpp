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

        (i) Compile-time (Static or Overloading) Polymorphism:
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

*/


class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) {
        return Complex(real * other.real, imag * other.imag);
    }


    Complex operator/(const Complex& other) {
        return Complex(real / other.real, imag / other.imag);
    }


    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

private:
    double real;
    double imag;
};

int main() {
    Complex a(3.0, 4.0);
    Complex b(1.5, 2.5);
    Complex c = a + b;
    Complex d = a - b;
    Complex e = a * b;
    Complex f = a / b;


    c.display(); // 4.5 + 6.5i
    d.display(); // 1.5 + 1.5i
    e.display(); // 4.5 + 10i
    f.display(); // 2 + 1.6i
    
    return 0;
}