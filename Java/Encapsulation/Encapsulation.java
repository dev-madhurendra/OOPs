package Encapsulation;

/**
 * Encapsulation in Java is a process of wrapping code and data together into a single unit, for example, a capsule which is mixed of several medicines.
 * We can create a fully encapsulated class in Java by making all the data members of the class private. Now we can use setter and getter methods to set and get the data in it.
 * The Java Bean class is the example of a fully encapsulated class.
 */

class Student {
    private String name;
    
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
}

//A Java class to test the encapsulated class.  
public class Encapsulation{  
    public static void main(String[] args){  
    //creating instance of the encapsulated class  
    Student s=new Student();  
    //setting value in the name member  
    s.setName("vijay");  
    //getting value of the name member  
    System.out.println(s.getName());  
    }  
} 