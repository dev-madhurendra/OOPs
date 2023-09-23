/**
 * Static keyword
 * ---------------
 * 
 * The static keyword in Java is used for memory management mainly. We can apply static keyword with variables, methods, blocks and nested classes. The static keyword belongs to the class than an instance of the class.
 * The static can be:
 *  Variable (also known as a class variable)
 *  Method (also known as a class method)
 *  Block
 *  Nested class
 */

//Java Program to demonstrate the use of static variable  
class Student{  
   int rollno;//instance variable  
   String name;  
   static String college ="ITS";//static variable  
   //constructor  
   Student(int r, String n){  
   rollno = r;  
   name = n;  
   }  
   //method to display the values  
   void display (){System.out.println(rollno+" "+name+" "+college);}  
}  

//static block

/**
 * Is used to initialize the static data member.
 * It is executed before the main method at the time of classloading.
 */
class A2{  
  static{System.out.println("static block is invoked");}  
  public static void main(String args[]){  
   System.out.println("Hello main");  
  }  
}  



//this keyword


/**
 * Here is 6 usage of java this keyword.
 * this can be used to refer current class instance variable.
 * this can be used to invoke current class method (implicitly)
 * this() can be used to invoke current class constructor.
 * this can be passed as an argument in the method call.
 * this can be passed as argument in the constructor call.
 * this can be used to return the current class instance from the method.
 */


 class ThisStudent{  
    int rollno;  
    String name;  
    float fee;  
    ThisStudent(int rollno,String name,float fee){  
        rollno=rollno;  
        name=name;  
        fee=fee;  
    }  
    void display(){System.out.println(rollno+" "+name+" "+fee);}  
}  
class TestThis1{  
    public static void main(String args[]){  
        ThisStudent s1=new ThisStudent(111,"ankit",5000f);  
        ThisStudent s2=new ThisStudent(112,"sumit",6000f);  
        s1.display();  
        s2.display();  
    }
}  

//Test class to show the values of objects  
public class StaticAndThisKeyword {
     public static void main(String args[]){  
        Student s1 = new Student(111,"Karan");  
        Student s2 = new Student(222,"Aryan");  
        //we can change the college of all objects by the single line of code  
        //Student.college="BBDIT";  
        s1.display();  
        s2.display();  
    }  
}
