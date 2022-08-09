/**
 * When you have a risk of Overriden , we use symbol.
 */

const person  = {};

const age1 = Symbol("age");

var name1 = "Nilesh";
var name2 = "Nilesh";
person[name1] = 5;
person[age1] = 10;
person[name2] = 11;
console.log(person);