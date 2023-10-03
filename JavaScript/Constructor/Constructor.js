class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    sayHello = () => {
        console.log(`Hello, my name is ${this.name} and I'm ${this.age} years old.`);
    }
}
  
// Creating an object using the class constructor
const person1 = new Person("John", 30);
console.log(person1.sayHello());
const person2 = new Person("Alice", 25);
console.log(person2.sayHello());


  