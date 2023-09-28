/*
    Object: 
        An object is an instance of a class. You create objects from a class to 
        work with the attributes and methods defined in that class.
*/
class Car {
    // Attributes or Fields
    String make;
    String model;
    int year;

    // Constructor
    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }

    // Method to display car information
    public void displayInfo() {
        System.out.println("Make: " + make);
        System.out.println("Model: " + model);
        System.out.println("Year: " + year);
    }
}
public class Object {
    public static void main(String[] args) {
        // Creating objects of the Car class
        Car car1 = new Car("Toyota", "Camry", 2022);
        Car car2 = new Car("Honda", "Civic", 2023);

        // Accessing object attributes and methods
        car1.displayInfo();
        System.out.println(); // Separating the two cars' information
        car2.displayInfo();
    }
}
