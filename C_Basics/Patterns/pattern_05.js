/*

------1
----1 2 1
--1 2 3 2 1 
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1

*/

let n = 3;
let row = 1 ;

while(row <= n){

    let result = "";

   // for printing the no of spaces before starting Numbers
    for(let spaces=0; spaces < 2*(n -row); spaces++ ){
        result = result +" ";
    }

    // Code for printing the front pyramid of th upper part
    for( let num =1; num <=row ; num++ ){
        result = result +num + " ";
    }
     
    // for decreasing the number in the upper phase
    for( let rev_num=row-1; rev_num>=1;  rev_num--)  {
        result = result +rev_num + " ";
    }

    // Considering all the condition, here comes the output
    console.log(result);
    row = row+1;
}

/*  lower part of the pattern  */
while(row <= (2*n)-1){
    let result ="";

    //spacing of the pattern
    for(let space = 1; space<= 2*(row -n); space++ ){
        result= result + " ";
    }
    
    // printing the Number in lower half of tringle 
    for(let num=1; num <= (2*n)-row; num++ ){
        result = result + num + " ";
    }
    
    //printing the Number in lower half in decreasing order
   for(let revNum = (2*n)-row-1 ; revNum >= 1; revNum--){
        result = result + revNum + " ";
   }
     
    // output for the lower half
    console.log(result);
    row =row +1;
}


