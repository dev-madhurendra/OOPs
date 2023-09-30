package Polymorphism.CompileTime;


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
 * 
 * 
 * Run time polymorphism ---> Method overriding
 */


 
/**
 * Compile time polymorphism
 * Compile time polymorphism ---> Method overloading
 * 
 * Compile-time polymorphism is also known as static polymorphism or early binding. 
 * Compile-time polymorphism is a polymorphism that is resolved during the compilation process. 
 * Overloading of methods is called through the reference variable of a class
 * 
 */
class CompileTimePolymorphismExample {
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
}

public class CompileTimePolymorphism {
    public static void main(String args[]){
        CompileTimePolymorphismExample obj = new CompileTimePolymorphismExample();
        obj.firstName = "Surya";
        obj.secondName= "Prakash";

        obj.echoName(obj.firstName, 5);
        System.out.println(obj.echoName(obj.secondName));
    }
}