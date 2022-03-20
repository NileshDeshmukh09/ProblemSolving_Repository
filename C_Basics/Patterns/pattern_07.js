/*
1 
1 2 
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/

// Assigning the variables
let num = 5;
let row = 0;

while(row <= num){
    // this will loop for n times
    let col = 0;
    let result = "";

    // condition for printing the logic
    while(col <=row){
        result =result +(col+1)+ " " ;
        col = col+1;
    }

    // output of the logic
    console.log( result);
    row = row +1;
}