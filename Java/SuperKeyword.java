/**
 * The super keyword in Java is a reference variable which is used to refer immediate parent class object.
 * Whenever you create the instance of subclass, an instance of parent class is created implicitly which is referred by super reference variable.
 * 
 * Usage of Java super Keyword
 * ----------------------------
 * super can be used to refer immediate parent class instance variable.
 * super can be used to invoke immediate parent class method.
 * super() can be used to invoke immediate parent class constructor.
 */

class Animal{  
    void eat(){System.out.println("eating...");}  
    }  
    class Dog extends Animal{  
        void eat(){System.out.println("eating bread...");}  
        void bark(){System.out.println("barking...");}  
        void work(){  
        super.eat();  
        bark();  
    }  
}  
 
public class SuperKeyword {
    public static void main(String args[]){  
    Dog d=new Dog();  
    d.work();
    }
}
