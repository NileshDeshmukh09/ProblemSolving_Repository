
/*

*
**
***
****
*****

*/


//  Assign the variables
let n=5;
let row= 0;

//Condition for checking the stars
while(row<(n)){
    let column = 0;
    let result = "";

    //for stars to be coming in a row
    while(column <= row){
        result =  result + "*";
        column = column + 1;
    }

    // Output for prining the stars 
    console.log(result);
    row = row + 1;
}


//------- Reverse Pattern --------------

let noOfStars = 5;
let Lower_rows = 0;

// for the lower half of the given type
while(Lower_rows < noOfStars-1){
    let column = 0;
    let result = "";

    // logic for the lower half
    while(column < (noOfStars- Lower_rows)){
        result = result + "*";
        column = column +1
    }

    //result of the whole code
    console.log(result);
    Lower_rows = Lower_rows+1;
}