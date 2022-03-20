let n = 5;
let row = 0;
 while(row < n){
     let stars = 0;
     let result = "";
     let spaces=0;
     
     while(spaces < n-row ){
         result = result +" ";
         spaces = spaces +1;
     }
     
     while( stars <= row){
        result = result +"*";
        stars = stars +1;
     }

     console.log(result);
     row = row+1;
 }