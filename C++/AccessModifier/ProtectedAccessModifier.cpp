#include<iostream>
using namespace std;

/*
    Protected Access Modifier:
        - Members declared as protected are accessible within the class and in 
          derived classes (subclasses).
        - Protected members are used to provide limited access to derived classes 
          while still keeping them hidden from external code.
*/

class BaseClass {
protected:
    int protectedVar; // Protected data member

public:
    void setProtectedVar(int val) {
        protectedVar = val; // Accessible through a public member function
    }
    
    int getProtectedVar() {
        return protectedVar;
    }
};


/*
    public members of BaseClass remain public in DerivedClass, 
    and protected members of BaseClass remain protected in DerivedClass.
*/

class DerivedClass : public BaseClass {
public:
    void accessBaseClassMembers() {
        protectedVar = 42; // Accessible in derived class
    }
};

int main() {
    DerivedClass obj;
    obj.setProtectedVar(42); // Accessing protected member via base class function
    cout << obj.getProtectedVar() << endl; // output will be 42
    return 0;
}
