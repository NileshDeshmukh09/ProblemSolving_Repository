function printCharWithFreq(str){

    let n = str.length;

    let freq = new Array(26).fill(0);

    for(let i = 0; i < n; i++){

      freq[str[i].charCodeAt(0) - 'a'.charCodeAt(0)]++;    
   }
   for(let i = 0; i < n; i++){

        if( freq[str[i].charCodeAt(0) - 'a'.charCodeAt(0)] != 0 ){
            console.log(str[i] , " - " , freq[str[i].charCodeAt(0) - 'a'.charCodeAt(0)]);
         
        }
   }
}

// Driver program to test above
let str = "geeksforgeeks";
printCharWithFreq(str);