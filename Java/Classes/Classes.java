
/**
 * OOPs (Object-Oriented Programming System)
 * 
 * Object means a real-world entity such as a pen, chair, table, computer,
 * watch, etc.
 * Object-Oriented Programming is a methodology or paradigm to design a program
 * using classes and objects.
 * It simplifies software development and maintenance by providing some
 * concepts:
 * 
 * Object
 * Class
 * Inheritance
 * Polymorphism
 * Abstraction
 * Encapsulation
 * 
 * Apart from these concepts, there are some other terms which are used in
 * Object-Oriented design:
 * 
 * Coupling
 * Cohesion
 * Association
 * Aggregation
 * Composition
 */

class Vehicle {
    /**
     * OBJECTS
     * -----------------------------------------------------
     * Any entity that has state and behavior is known as an object.
     * For example, a chair, pen, table, keyboard, bike, etc.
     * It can be physical or logical.
     * 
     * An Object can be defined as an instance of a class.
     * An object contains an address and takes up some space in memory.
     * Objects can communicate without
     * knowing the details of each other's data or code.
     * The only necessary thing is the type of message accepted and the type of
     * response returned by the
     * objects.
     * 
     */

    //data members, private in nature
    private String vehicleNumber;
    private float price;
    private String model;
    private String color;
    private String variant;
    private String vehicleName;

    public String getVehicleNumber() {
        return vehicleNumber;
    }

    public void setVehicleNumber(String vehicleNumber) {
        this.vehicleNumber = vehicleNumber;
    }

    public float getPrice() {
        return price;
    }

    public void setPrice(float price) {
        this.price = price;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getVariant() {
        return variant;
    }

    public void setVariant(String variant) {
        this.variant = variant;
    }

    public String getVehicleName() {
        return vehicleName;
    }

    public void setVehicleName(String vehicleName) {
        this.vehicleName = vehicleName;
    }

    @Override
    public String toString() {
        return "Vehicle [vehicleNumber=" + vehicleNumber + ", price=" + price + ", model=" + model + ", color=" + color
                + ", variant=" + variant + ", vehicleName=" + vehicleName + "]";
    }

}

public class Classes {
    public static void main(String args[]) {
        Vehicle car = new Vehicle(); //creating car object from its blueprint class
        car.setVehicleName("TATA PUNCH");
        car.setColor("Yellow");
        car.setModel("MX11");
        car.setPrice(1000000);
        car.setVariant("LX-11");
        car.setVehicleNumber("1S23DDE");

        System.out.println(car.toString());
    }
}
