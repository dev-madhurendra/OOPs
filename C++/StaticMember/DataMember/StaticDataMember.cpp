#include<iostream>
using namespace std;

/*
    Static Data Members:

        Static data members are class-level variables that are shared among all 
        instances (objects) of the class.They are declared with the static keyword 
        and must be defined separately outside the class declaration.Each instance 
        of the class can access and modify the same static data member.Static data 
        members are initialized only once, typically during program startup.

*/
class StaticDataMemberClass {
public:
    static int count; // Declaration of a static data member
};

// Definition and initialization of the static data member
int StaticDataMemberClass::count = 0;

int main() {
    StaticDataMemberClass obj1,obj2,obj3;

    obj1.count = 1;
    obj2.count = 2;
    obj3.count = 3;

    std::cout << obj1.count << " " << obj2.count << " "  << obj3.count  << std::endl; // Outputs: 2 2
    return 0;
}
