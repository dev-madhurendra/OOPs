//Compiletime polymorphism ---> Method overloading

/**
 * Polymorphism in Java is a concept by which we can perform a single action in
 * different ways. Polymorphism is derived from 2 Greek words: poly and morphs.
 * The word "poly" means many and "morphs" means forms. So polymorphism means
 * many forms.
 * 
 * There are two types of polymorphism in Java: compile-time polymorphism and
 * runtime polymorphism. We can perform polymorphism in java by method
 * overloading and method overriding.
 * 
 * In method overloading, name of methods are same but there is change in
 * signature and return type
 * of methods which are present in same class
 */
class CompileTimePolymorphism {
    String firstName;
    String secondName;

    public void echoName(String name, int times) {
        for (int time = 1; time <= times; time++) {
            System.out.println("Echo name" + " " + name + " " + time + " " + "times");
        }
    }

    public String echoName(String name) {
        return name;
    }

    public String firstName(String name) {
        return name;
    }

    public String secondName(String name) {
        return name;
    }
}

// Runtime Polymorphism ---> Method overiding

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
        System.out.println("Parents habbit");
    }
}

class Child extends Parents {
    public void habit() {
        System.out.println("Child habbit");
    }
}

public class Polymorphism {
    public static void main(String args[]) {
          CompileTimePolymorphism obj = new CompileTimePolymorphism();
          obj.firstName("Surya");
          obj.secondName("Prakash");

          obj.echoName(obj.firstName, 5);
          System.out.println(obj.echoName(obj.secondName));

          Parents parents = new Parents();
          parents.habit();

          Parents child = new Child();
          child.habit();
    }
}

// Upcasting

/**
 * 
 * If the reference variable of Parent class refers to the object of Child
 * class, it is known as upcasting. For example:
 */

class A {
}

class B extends A {
}
// A a=new B();//upcasting


//Downcasting
/**
 * Downcasting, we typecast a child object to a parent object and a parent
 * object to a child object simultaneously. We can perform Upcasting implicitly
 * or explicitly, but downcasting cannot be implicitly possible.
 */

/**
 * A a = new B();
 * B b = (B)a; //Downcasting
 */
