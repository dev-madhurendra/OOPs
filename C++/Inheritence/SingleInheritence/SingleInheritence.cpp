#include<iostream>
using namespace std;

class Base {
private:
    int data;
public:
    void setData(int val) {
        data = val;
    }
    int getData() {
        return data;
    }
};
/*
    The keyword public in this context is used to specify the access control 
    for the inheritance relationship between the Derived class and the Base 
    class. It determines how the members (data members and member functions) 
    of the base class Base will be accessible in the derived class Derived. 
    In this specific case:

    Public Members: 
        Any public members (data members and member functions) of the 
        base class Base will remain public in the derived class Derived. This means 
        that they can be accessed both from within the derived class itself and from 
        external code that creates objects of the derived class.

    Protected Members: 
        Any protected members of the base class Base will become 
        protected members in the derived class Derived. This means that they are 
        accessible within the derived class and any classes derived from Derived, 
        but they are not accessible from external code.

    Private Members: 
        Private members of the base class Base remain private to 
        the base class and are not accessible in the derived class Derived.

    Public inheritance is a way of expressing an "is-a" relationship between classes. 
    It means that the derived class Derived is a type of the base class Base and inherits 
    its public and protected properties. Public members of Base remain public in Derived, 
    allowing them to be used within Derived and by external code.
*/
class Derived : public Base {
public:
    void display() {
        cout << "Data: " << getData() << endl;
    }
};
int main() {
    // Create an object of the Derived class
    Derived derivedObj;

    // Assign a value to the 'data' member inherited from the Base class
    derivedObj.setData(45);

    // Call the 'display' member function from the Derived class
    derivedObj.display(); // Output: Data: 45

    return 0;
}
