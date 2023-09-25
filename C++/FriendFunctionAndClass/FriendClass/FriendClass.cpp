#include<iostream>
using namespace std;

/*

    Friend Class :
        A friend class can access private and protected members of other classes 
        in which it is declared as a friend. It is sometimes useful to allow a 
        particular class to access private and protected members of other classes. 
        For example, a LinkedList class may be allowed to access private members of 
        Node.We can declare a friend class in C++ by using the friend keyword.

    We can declare friend class or function anywhere in the base class body whether 
    its private, protected or public block. It works all the same.
*/

class FriendClassImpl {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    FriendClassImpl() {
        private_variable = 10;
        protected_variable = 99;
    }
 
    friend class FriendClass;
};
 
/*
    Here, class FriendClass is declared as a friend inside class FriendClassImpl. 
    Therefore,FriendClass is a friend of class FriendClassImpl. Class FriendClass
    can access the private members of class FriendClassImpl.
*/
class FriendClass {
public:
    void display(FriendClassImpl& fci)
    {
        cout << "The value of Private Variable = "
             << fci.private_variable << endl;
        cout << "The value of Protected Variable = "
             << fci.protected_variable;
    }
};
 
// Driver code
int main()
{
    FriendClassImpl fci;
    FriendClass fc;
    fc.display(fci);
    return 0;
}