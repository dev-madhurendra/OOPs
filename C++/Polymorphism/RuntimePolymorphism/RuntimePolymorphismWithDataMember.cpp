#include<iostream>
using namespace std;

class Animal {
public:
    string color = "Black";
};
 
// inheriting Animal class.
class Dog : public Animal {
public:
    string color = "Grey";
};
 
// Driver code
int main(void) {
    Dog dog = Dog();
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color << endl; // Grey
    cout << dog.color << endl; // Black
}