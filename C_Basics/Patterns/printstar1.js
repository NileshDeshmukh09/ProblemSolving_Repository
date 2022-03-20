/*  
   starts in increasing order and end ups  decreasing order
      * 
    * * * 
  * * * * *
* * * * * * *
  * * * * *
    * * *
      * 
*/



let n = 7;
let row = 0;

while(row <= Math.floor(n/2)){          //    5/2 => 2.5 => 0 to 2 rows  
    let result="";
    let space = 0;

    //printing space with the rows,
    while(space < (n-(2*row+1))){
        result = result+ " ";
        space= space+1;
    }

    //stars for the conditions
    let stars=0;
    while(stars < (2*row +1)){
        result = result + "* "
        stars = stars + 1;
    }

    //Here is the result
    console.log(result);
    row= row+1;
}

  /* Logic for the lower half */

while(row <= n){   // 5/2 => 2.5 => 0to2 rows
    let result="";
    let space=0;
    let no_of_stars=2*(n-row)-1; 

    //spaces in the lower part
    while(space< (n-no_of_stars)){
        result = result + " ";
        space= space +1;
    }

    //Printing the No.of stars in lower half 
    let stars = 0;

    while(stars < no_of_stars){
        result = result + "* ";
        stars = stars +1;
    }
    
    // Output for the lower half
    console.log(result);
    row = row +1;
}



// -------------**********************************------------------------******************************--------------

