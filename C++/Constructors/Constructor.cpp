#include<bits/stdc++.h>
using namespace std;

/*
	Constructor : 
        - Constructor is a function which name is same as class name and 
          having no return type.
				  
	    - Constructor is a special method that is invoked automatically 
		  at the time of object creation.

		- It is used to initialize the data members of new objects generally.

        - Constructors are used to initialize the data members of the object and perform any necessary setup.


	Constuctor is of three type.
        1.Default or Non-parameterized
        2.Parameterized
        3.Copy


	Default Constructor : 
        - Default Constructors don’t have input argument however.

		- If we do not specify a constructor, C++ compiler generates a default 
          constructor for object (expects no parameters and has an empty body).

        - A default constructor is a constructor with no parameters. 
          It is automatically called when an object is created if no other constructor is specified.

	Parameterized Constructor : 
        - A parameterized constructor accepts one or more parameters to initialize 
          the object with specific values.

	Copy Constructor : 
        - A copy constructor creates a new object by copying the values of another 
          object of the same class. It is used when objects are passed by value or when objects are created as 
*/

//class
class Dog{
	//data member
private:
	string name;
public:
	//Default constructor
	Dog(){
		name = "";
	}
	//parameterized constructor
	Dog(string name_a){
		name = name_a;
	}
	//copy constructor
	Dog(Dog &dog_1){
		name = dog_1.name;
	}
	//member function
	void run(){
		cout << name << " is running." << endl;
	}
};
int main(){
	Dog dg1;// dg is object of class Dog
	Dog dg2("Pitbull");
	Dog dg3(dg2);

	dg1.run();// Output will be is running.
	dg2.run();// Output will be Pitbull is running.
	dg3.run();// Output will be Pitbull is running.

	return 0;
}