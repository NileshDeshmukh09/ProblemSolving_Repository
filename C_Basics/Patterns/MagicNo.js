let num = 1252;
// let result = "";

for(let index = 0; index < num; index++){
    let str = index + "";
    let sum = 0 ;
    let NoOfDigits = str.length;

    for(let i = 0; i <= NoOfDigits; i++){
        sum = sum  + "+" + str;
    }
    console.log(sum);

   

}
