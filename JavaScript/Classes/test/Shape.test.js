import Shape from '../Shape'
describe('Shape', () => {
  it('should have correct initial position', () => {
    const myShape = new Shape(10, 20)
    expect(myShape.getX()).toBe(10)
    expect(myShape.getY()).toBe(20)
  })

  it('should be able to move and update position', () => {
    const myShape = new Shape(10, 20)
    myShape.move(30, 40)
    expect(myShape.getX()).toBe(30)
    expect(myShape.getY()).toBe(40)
  })

  it('should create another shape with the correct initial position', () => {
    const anotherShape = new Shape(5, 8)
    expect(anotherShape.getX()).toBe(5)
    expect(anotherShape.getY()).toBe(8)
  })

  it('should be able to move another shape and update position', () => {
    const anotherShape = new Shape(5, 8)
    anotherShape.move(15, 25)
    expect(anotherShape.getX()).toBe(15)
    expect(anotherShape.getY()).toBe(25)
  })
})
