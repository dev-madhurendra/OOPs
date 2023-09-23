/**
 * There are two types of binding
 * Static Binding (also known as Early Binding).
 * Dynamic Binding (also known as Late Binding).

 */

//Example of Static binding

/** When type of the object is determined at compiled time(by the compiler), it is known as static binding.
    If there is any private, final or static method in a class, there is static binding. 
*/
class Dog{  
 private void eat(){System.out.println("dog is eating...");}  
  
 public static void main(String args[]){  
  Dog d1=new Dog();  
  d1.eat();  
 }  
}  



//Example of Dynamic binding

//When type of the object is determined at run-time, it is known as dynamic binding.
class WildAnimal{  
 void eat(){System.out.println("animal is eating...");}  
}  
  
class DynamicBindingDog extends WildAnimal{  
 void eat(){System.out.println("dog is eating...");}  
  
 public static void main(String args[]){  
  WildAnimal a=new DynamicBindingDog();  
  a.eat();  
 }  
}  
public class StaticAndDynamicBindings {
    
}
