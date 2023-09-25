#include<iostream>
using namespace std;

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