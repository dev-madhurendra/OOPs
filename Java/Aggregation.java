/**
 * If a class have an entity reference, it is known as Aggregation. 
 * Aggregation represents HAS-A relationship.
 * Consider a situation, Employee object contains many informations such as id, name, emailId etc. It contains one more object named address, which contains its own informations such as city, state, country, zipcode etc. as given below.
 */

 //usage

 /**
  * Code reuse is also best achieved by aggregation when there is no is-a relationship.
    Inheritance should be used only if the relationship is-a is maintained throughout the lifetime of the objects involved; otherwise, aggregation is the best choice.
  */
 class Address {}
 class Employee{  
    int id;  
    String name;  
    Address address;//Address is a class  
}  
public class Aggregation {
    
}
