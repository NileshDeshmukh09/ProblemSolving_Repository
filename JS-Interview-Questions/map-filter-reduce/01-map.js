// Square the value of every element in the array .
// Presume that you will get number in the input array.

const input = [ 1 , 2 , 3, 4 , 5];

const val = input.map( ( value => value* value));
console.log( "Square :",val );

// ---------------------

// If the given input is a n array of number return the sum of all positive number
// If the input is empty or there aren't any positibve number return 0;

const input01 = [ 1, -4 , 12 , 0 , -3 , 29 , -150 ];

const output = input01.filter(curr => curr > 0).reduce( ( acc, curr) =>  acc + curr , 0);
console.log( "Sum :", output );

// ----------------------

// Calculate the mean and median values of the number elements from the input array 

const input02 = [ 12 , 46 , 32 , 64];

const sum = input02.reduce( ( acc , curr ) => {
   const sum = acc + curr;
  return sum; 
}, 0);

console.log( "Mean : ", sum/input02.length);

const sortedArr = input02.sort( (a, b) => a-b);
const median =( 0 + (sortedArr.length - 1))/2
console.log( "Median : ", sortedArr[Math.floor(median)]);

// ------------------------

// input is a string of multiple words with a space between each of them ,
// return the name initials

const input03 = "George Raymond Richard Martin";

const getInitials = input03.split(" ").map( val => val[0]).join("");

console.log( "GetIntials : ", getInitials );

// ----------------

// Find the Difference in Age from the youngest and the oldest

const input04 = [
    { name: 'John', age: 13  },
    { name: 'Mark', age: 56, },
    { name: 'Rachel', age: 45 },
    { name: 'Nate', age: 67 },
    { name: 'Jeniffer', age: 65 }
  ];

const agesArr = input04.map( val => val.age );
let arr = [ Math.min( ...agesArr) , Math.max( ...agesArr) , Math.max( ...agesArr ) - Math.min( ...agesArr )]
console.log( arr );

// -------------------------

// Devs like to abbreviate everything: k8s means Kubernetes, a11y means accessibility, l10n means localization. You get the Dev numeronyms by taking the first and the last letter and counting the number of letters in between.

const input05 = 'Every developer likes to mix kubernetes and javascript';

const alphaNumeric = ( val )  => val[0] + (val.length-2) + val[ val.length -1 ];

const getAbbreviate = input05
    .split(" ")
    .map( val => val.length >= 4 ? alphaNumeric( val ) : val )
    .join(" ");

console.log( getAbbreviate );
  

