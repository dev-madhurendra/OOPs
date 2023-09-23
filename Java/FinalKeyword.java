
/**
 * The final keyword in java is used to restrict the user. The java final keyword can be used in many context. Final can be:
 * 1) variable
 * 2) method
 * 3) class
 * 
 * The final keyword can be applied with the variables, 
 * A final variable that have no value it is called blank final variable or uninitialized final variable. 
 * It can be initialized in the constructor only. 
 * The blank final variable can be static also which will be initialized in the static block only. 
 * We will have detailed learning of these. 
 * Let's first learn the basics of final keyword.
 */


 
//final variable
//If you make any variable as final, you cannot change the value of final variable(It will be constant)

class Bike{  
 final int speedlimit=90;//final variable  
 void run(){  
  speedlimit=400;  //this is error
 }  
 public static void main(String args[]){  
 Bike obj=new  Bike();  
 obj.run();  
 }  
}//end of class 


//final method
//If you make any method as final, you cannot override it.
class Biker{  
  final void run(){System.out.println("running");}  
}  
     
class Honda extends Biker{  
   void run(){System.out.println("running safely with 100kmph");}  
     
   public static void main(String args[]){  
   Honda honda= new Honda();  
   honda.run();  
   }  
}  

//final class
//If you make any class as final, you cannot extend it
final class Bikes{}  
  
class Honda1 extends Bikes{  
  void run(){System.out.println("running safely with 100kmph");}  
    
  public static void main(String args[]){  
  Honda1 honda= new Honda1();  
  honda.run();  
  }  
}  

public class FinalKeyword {
    
}
