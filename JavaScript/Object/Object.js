/**
 * @Explanation
 *      Objects are instances of classes or constructors in OOP. 
 *      In JavaScript, objects are a fundamental data type, and they can store 
 *      both data (properties) and behavior (methods).
 * 
 */

// Object with properties
const Person = {
    firstName: "John",
    lastName: "Doe",
    age: 30,
    greet: function () {
        console.log(`Hello, ${this.firstName} ${this.lastName}`);
    }
};

// Accessing object properties
console.log(Person.firstName); // "John"
Person.greet(); // Outputs: Hello, John Doe
