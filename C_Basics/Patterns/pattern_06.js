 // Assigning the variables
let n =4;
let row = 0;

while( row < n){
    // this loop will run for  n No of Rows
    let result = "";
    let stars = 0; 

    //Condition for printing the stars in the row
    while(stars <= row){
        result = result +"*" ;
        stars= stars +1;
    }

    let spaces = 0 ;
    while( spaces < (n - stars)){
        result= result + " ";
        spaces= spaces+1;
    }

   
    while (spaces < 2*(n-row)-1){
        result= result + " ";
        spaces= spaces+1;
    }

    while (stars<= 2*n-spaces ){
        result = result +"*" ;
        stars= stars +1;
    }
    
    


    // Output of the given code
    console.log(result);
    row++;
}

while(row < n){
   
}


