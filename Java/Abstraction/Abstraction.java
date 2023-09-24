/**
 * Abstraction is a process of hiding the implementation details and showing
 * only functionality to the user.
 * Another way, it shows only essential things to the user and hides the
 * internal details, for example, sending SMS where you type the text and send
 * the message.
 * You don't know the internal processing about the message delivery.
 * 
 * Points to Remember
 * ----------------------
 * 1) An abstract class must be declared with an abstract keyword.
 * 2) It can have abstract and non-abstract methods.
 * 3) It cannot be instantiated.
 * 4) It can have constructors and static methods also.
 * 5) It can have final methods which will force the subclass not to change the
 * body of the method.
 */

abstract class Bike {
  abstract void run();
}

class Honda extends Bike {
  void run() {
    System.out.println("running safely");
  }
}

public class Abstraction {
  public static void main(String args[]) {
    Bike obj = new Honda();
    obj.run();
  }
}
