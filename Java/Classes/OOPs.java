// Defining the OOPs class
/**
 * 
 * In Object-Oriented Programming (OOP), classes are used to define blueprints 
 * or templates for creating objects. Objects, in turn, are instances of classes 
 * and encapsulate both data (attributes or fields) and behavior (methods or 
 * functions). Java is a popular programming language that fully supports OOP 
 * principles, and you can create your own classes in Java to model and structure 
 * your programs.
 * 
 */
public class OOPs {
    // Attributes (data members)
    private String language;
    private int year;

    // Constructor to initialize attributes
    public OOPs(String language, int year) {
        this.language = language;
        this.year = year;
    }

    // Method to display information about the OOPs language
    public void displayInfo() {
        System.out.println("Language: " + language);
        System.out.println("Year of Introduction: " + year);
    }

    // Getter method for the language attribute
    public String getLanguage() {
        return language;
    }

    // Setter method for the language attribute
    public void setLanguage(String language) {
        this.language = language;
    }

    // Getter method for the year attribute
    public int getYear() {
        return year;
    }

    // Setter method for the year attribute
    public void setYear(int year) {
        this.year = year;
    }

    // Main method to demonstrate the OOPs class
    public static void main(String[] args) {
        // Create an instance of the OOPs class
        OOPs oopsLanguage = new OOPs("Java", 1995);

        // Display information about the OOPs language
        oopsLanguage.displayInfo();

        // Update the year attribute
        oopsLanguage.setYear(1996);

        // Display the updated information
        oopsLanguage.displayInfo();
    }
}
