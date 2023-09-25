#include<bits/stdc++.h>
using namespace std;
/*
	Inheritence : 1.The capability of a class to derive properties and 
				  characteristics from another class is called Inheritance.

				  2.The new class which inherited the base class is called derived 
                  class or child class or "sub class" and the existing class is known as the 
				  base class or parent class or "super class. 

	Used to improve code reuseability
	Derived class can access both derived and base class.


*/

//Base class or Parent class or Super class
class Rectangle {
public:
	//data member
	int length , breadth;
public:
	//member function
	void show(){
		cout << "Length is " << length << "\n" << "Breadth is " << breadth << endl;
	}

	void area(){
		cout << "Area is " << length*breadth << endl; 
	}
};


//Child class or sub class or derived class
class Cubeoid:public Rectangle {
public:
	//data member
	int height;

	//member function
	void display(){
		cout << "Height is " << height << endl;
	}

	void volume(){
		cout << "Volume is " << length*breadth*height << endl; 
	}
};
int main(){
	Cubeoid c;//object created of Cuboid class
	c.length = 10 , c.breadth = 20 , c.height = 30;
	c.show();//called function of Rectangle class
	c.display();//called function of Cubeoid class
	c.volume();
	c.area();
	return 0;
}