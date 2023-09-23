/**
 * @author dev-madhurendra
 *
 *
 * @class : In Object-Oriented Programming (OOP), a class is a blueprint or template
 * for creating objects (instances). It defines the properties (also known as
 * attributes or fields) and methods (functions) that the objects created from
 * the class will have. JavaScript, starting from ECMAScript 6 (ES6), introduced
 * support for classes, making it easier to work with OOP principles in JavaScript.
 *
 * Represents a basic shape.
 * @class
 */
class Shape {
    x: number
    y: number
    /**
     * Create a new shape.
     * @param {number} x - The X coordinate of the shape's position.
     * @param {number} y - The Y coordinate of the shape's position.
     */
    constructor(x: number, y: number) {
        this.x = x
        this.y = y
    }

    /**
     * Get the X coordinate of the shape.
     * @returns {number} The X coordinate.
     */
    getX() {
        return this.x
    }

    /**
     * Get the Y coordinate of the shape.
     * @returns {number} The Y coordinate.
     */
    getY() {
        return this.y
    }

    /**
     * Move the shape to a new position.
     * @param {number} newX - The new X coordinate.
     * @param {number} newY - The new Y coordinate.
     */
    move(newX: number, newY: number) {
        this.x = newX
        this.y = newY
    }
}

export default Shape
