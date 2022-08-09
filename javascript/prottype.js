/**
 * Prototype
 * 
 *   1. Object
 *   2. It's present as a default object in every function and object
 * 
 */

/**
 * Constructor Function 
 
 */

function Car(name , color){
    this.name = name;
    this.color = color;
}

Car.brand = "Bike "; // This will not work

Car.prototype.brand = "Bike";
// Creating object from the Function is Constructor function 
const car1 = new Car("KTM" , "Red");
console.log(car1)