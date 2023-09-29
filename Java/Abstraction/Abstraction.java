/**
 * Abstraction is a process of hiding the implementation details and showing only functionality to the user.
 * Another way, it shows only essential things to the user and hides the internal details, for example, sending SMS where you type the text and send the message. 
 * You don't know the internal processing about the message delivery.
 * 
 * Points to Remember
 * ----------------------
   1) An abstract class must be declared with an abstract keyword.
   2) It can have abstract and non-abstract methods.
   3) It cannot be instantiated.
   4) It can have constructors and static methods also.
   5) It can have final methods which will force the subclass not to change the body of the method.
 */


 
/**
 * Use of Abstract class to implement abstraction
 */
abstract class Shape {
	String color;

	// these are abstract methods
	abstract double area();

	public abstract String toString();

	// abstract class can have the constructor
	public Shape(String color) {
		System.out.println("Shape constructor called");
		this.color = color;
	}

	// this is a concrete method
	public String getColor() {
		return color;
	}
}

class Circle extends Shape {
	double radius;

	public Circle(String color, double radius) {

		// calling Shape constructor
		super(color);
		System.out.println("Circle constructor called");
		this.radius = radius;
	}

	@Override
	double area() {
		return Math.PI * Math.pow(radius, 2);
	}

	@Override
	public String toString() {
		return "Circle color is " + super.getColor()
				+ "and area is : " + area();
	}
}

class Rectangle extends Shape {

	double length;
	double width;

	public Rectangle(String color, double length,
			double width) {
		// calling Shape constructor
		super(color);
		System.out.println("Rectangle constructor called");
		this.length = length;
		this.width = width;
	}

	@Override
	double area() {
		return length * width;
	}

	@Override
	public String toString() {
		return "Rectangle color is " + super.getColor()
				+ "and area is : " + area();
	}
}

/**
 * Here we implement abstraction with the help of interfaces
 */
class Bird implements AbstractionInterface {
	
	public int calculateDamage(int strength, double velocity, double angle) {
		return (int) ((int)strength*velocity);
	}
}

public class Abstraction {
	public static void main(String[] args) {
		Shape s1 = new Circle("Red", 2.2);
		Shape s2 = new Rectangle("Yellow", 2, 4);
		Bird bird = new Bird();

		System.out.println(bird.calculateDamage(89, 110.11, 45));
		System.out.println(s1.toString());
		System.out.println(s2.toString());
	}
}
