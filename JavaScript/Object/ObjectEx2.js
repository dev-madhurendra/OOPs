class Student {
    constructor(firstName, lastName, id) {
        this.firstName = firstName
        this.lastName = lastName
        this.id = id
    }

    getName() {
        return this.firstName + " " + this.lastName; 
    } 

    getStudentDetail() {
        return "Student is " + this.firstName + " " + this.lastName + "\n id is " + this.id; 
    }
}

const student1 = new Student("Madhurendra Nath " , "Tiwari" , 1);
console.log(student1.getStudentDetail());