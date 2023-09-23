#include<bits/stdc++.h>
using namespace std;
/*
Class -> 
       	1.class is a blueprint for creating objects.

       	2.class consist of data member and member function.

	  	3. A Class is a user-defined data-type which has data members and member functions.

		4.Data members are the data variables and member functions 
		  are the functions used to manipulate these variables and together 
		  these data members and member functions define the properties and behaviour 
		  of the objects in a Class.

		5.In the above example of class Car, the data member will be speed limit, 
		   mileage etc and member functions can apply brakes, increase speed etc.

Object ->
       	1.Object is instance of class.

       	2.Object is real world entity.

		3.When a class is defined, no memory is allocated but when 
		 it is instantiated (i.e. an object is created) memory is allocated.

*/

//class
class Dog{
	// data member
	string name = "Pitbull";
public:
	// member fucntion
	void run(){
		cout << name << " is running. " << endl;
	}
};
int main(){
	Dog dg;// dg is object of class Dog

	dg.run();// member function run() called of class Dog

	return 0;
}