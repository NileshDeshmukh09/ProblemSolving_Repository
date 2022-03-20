//  In Every row , first complete spaces , then move on to stars!
/*
        * 
      * * * 
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

let n = 5;

for(let row = 1; row<= n ; row++){
    // this loop will do something for each row

    let result = "";
    
    //for printing the no of spaces in the beginning of the stars 
    for(let space= 1; space <= 2*(n - row); space++){
        result = result + " ";
    }

    // for printing the stars  followed with the no of rows
    for(let stars = 1; stars <= (2*row)-1; stars++){
        result = result + "* ";
    }
    console.log(result);
}

//----------------------------------------------------------------------------------------------------------------------------------
