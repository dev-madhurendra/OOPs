package AccessModifiers;

/**
 * There are four types of Java access modifiers:
 * --------------------------------------------------
 * Private: The access level of a private modifier is only within the class. It cannot be accessed from outside the class.
 * Default: The access level of a default modifier is only within the package. It cannot be accessed from outside the package. If you do not specify any access level, it will be the default.
 * Protected: The access level of a protected modifier is within the package and outside the package through child class. If you do not make the child class, it cannot be accessed from outside the package.
 * Public: The access level of a public modifier is everywhere. It can be accessed from within the class, outside the class, within the package and outside the package.
 */

//Note: A class cannot be private or protected except nested class.

//private
class PrivateClass{  
    private int data=40;  
    private void msg(){System.out.println("Hello java");}  
}  

//public 
class PublicClass {
    public int data = 40;
}
public class AccessModifiers {
   PrivateClass obj = new PrivateClass();
   System.out.println(obj.data); //Compile Time Error  
   obj.msg(); //Compile Time Error  

   PublicClass publicClass = new PublicClass();
   System.out.println(publicClass.data);
}

//default

//save by DefaultClass.java  
// package pack;  
// class DefaultClass{  
//   void msg(){System.out.println("Hello");}  
// }  

//save by B.java  
// package mypack;  
// import pack.*;  
// class B{  
//   public static void main(String args[]){  
//    DefaultClass obj = new DefaultClass();//Compile Time Error  
//    obj.msg();//Compile Time Error  
//   }  
// }  


//protected

//save by ProtectedClass.java  
// package pack;  
// public class ProtectedClass{  
// protected void msg(){System.out.println("Hello");}  
// }  
// //save by B.java  
// package mypack;  
// import pack.*;  
  
// class B extends ProtectedClass{  
//   public static void main(String args[]){  
//    B obj = new B();  
//    obj.msg();  
//   }  
// }