#include <iostream>
using namespace std;



class Base {
public:
    // Constructor of the Base class
    Base(int x) {
        this->x = x;
        cout << "Base class constructor called with x = " << x << endl;
    }

    void showX() {
        cout << "Value of x in Base class: " << x << endl;
    }

// data member
private:
    int x;
};

/*
    Derived class is inheriting base class publicly tha means Public inheritance 
    is a way of expressing an "is-a" relationship between classes. It means that 
    the derived class Derived is a type of the base class Base and inherits 
    its public and protected properties. Public members of Base remain public in 
    Derived,allowing them to be used within Derived and by external code.
*/
class Derived : public Base {
public:
    // Constructor of the Derived class
    Derived(int x, int y) : Base(x) {
        this->y = y;
        cout << "Derived class constructor called with y = " << y << endl;
    }

    void showY() {
        cout << "Value of y in Derived class: " << y << endl;
    }

// data member
private:
    int y;
};

int main() {
    // Creating an object of the Derived class
    Derived derivedObj(10, 20);

    // Accessing members of both the Base and Derived classes
    derivedObj.showX(); // Accessing the Base class member function
    derivedObj.showY(); // Accessing the Derived class member function

    return 0;
}
