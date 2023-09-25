#include<iostream>
using namespace std;

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
