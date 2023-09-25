#include<bits/stdc++.h>
using namespace std;

/*
        Polymorphism : 
                    1.Base class pointer and derived class object
                    2.Virtual function
                    3.Abstract class


        when we create pointer of base class and object of derived class then
        base class object always initiated so we use virtual function to access the
        feature of derived class and if we want that base class object never
        initated then we use abstract class.

        3.Abstract class : 
            ->abstract class is used when we never want to initiate base class.

            -> if pure virtual function exist in any class then that class become
            abstract class.

            ->if we don't want to perform any activity of base class then we use
            pure virtual function.




                    
                                    function overloading                           
                                    /
                        Compile time -
                     /              \
                    /                operator overloading
        Polymorphism -                
                    \           virtual function
                     \         /
                        runtime -
                                \
                                function overriding



                          
*/

class Shape {
public:
    // Pure virtual function
    /*
        A pure virtual function is a special type of virtual function declared 
        in a base class but without providing an implementation in the base class. 
        Instead, it is meant to be overridden (provided with an implementation) by 
        derived classes. Pure virtual functions are also referred to as abstract 
        functions.
    */
    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the pure virtual function
    void calculateArea() override {
        double area = 3.14159 * radius * radius;
        cout << "Circle Area: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override the pure virtual function
    void calculateArea() override {
        double area = width * height;
        cout << "Rectangle Area: " << area << endl;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Polymorphic behavior using pointers to the base class
    Shape* shapePtr1 = &circle;
    Shape* shapePtr2 = &rectangle;

    shapePtr1->calculateArea(); // Calls Circle's implementation
    shapePtr2->calculateArea(); // Calls Rectangle's implementation

    return 0;
}