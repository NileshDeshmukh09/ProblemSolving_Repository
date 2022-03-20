/*

1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/

let n = 5;
let row = 0;

while(row <= n){
    // this loop does something for every row
    let column = 1;
    let result = "";
    while(column <= n){
        // this loop iterates n more times for each row
        result = result +column + " ";
        column = column +1;
    }
    console.log(result);
    row = row +1;
}