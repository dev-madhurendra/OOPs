package Polymorphism.RunTime;

/**
 * Runtime polymorphism or Dynamic Method Dispatch is a process in which a call
 * to an overridden method is resolved at runtime rather than compile-time.
 * 
 * In this process, an overridden method is called through the reference
 * variable of a superclass. The determination of the method to be called is
 * based on the object being referred to by the reference variable.
 */

class Parents {
    String father;
    String mother;

    public void habit() {
        System.out.println("Parents habit");
    }
}

class Child extends Parents {
    public void habit() {
        System.out.println("Child habit");
    }
}

public class RunTimePolymorphism {
    public static void main(String args[]){
        
        Parents parents = new Parents();
        parents.habit();

        Parents child = new Child();
        child.habit();
    }
}
