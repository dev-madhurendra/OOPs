/**
 * Instance Initializer block is used to initialize the instance data member. 
 * It run each time when object of the class is created.
 * The initialization of the instance variable can be done directly but there can be performed extra operations while initializing the instance variable in the instance initializer block.
 */

 class Bike{  
    int speed=100;  
}  
// Why use instance initializer block?
// Suppose I have to perform some operations while assigning value to instance data member e.g. a for loop to fill a complex array or error handling etc.


class Bikes{  
    int speed;  
      
    Bikes(){System.out.println("speed is "+speed);}  
   
    {speed=100;}  
       
    public static void main(String args[]){  
    Bikes b1=new Bikes();  
    Bikes b2=new Bikes();  
    }      
}  

//What is invoked first, instance initializer block or constructor?
class Biker{  
    int speed;  
      
    Biker(){System.out.println("constructor is invoked");}  
   
    {System.out.println("instance initializer block invoked");}  
       
    public static void main(String args[]){  
    Biker b1=new Biker();  
    Biker b2=new Biker();  
    }      
}  

/*
Output:instance initializer block invoked
       constructor is invoked
       instance initializer block invoked
       constructor is invoked 
*/

