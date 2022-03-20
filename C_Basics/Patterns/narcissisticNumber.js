let num = 10000;

//narcissistic Number
 for(let n = 0; n <=num; n++){
    let str = "" + n;
    let no_of_digits = str.length;
    let temp =n;
    let sum = 0;
    while(temp>0){
        let last_digit = temp%10;
        sum = sum + Math.pow(last_digit, no_of_digits);
        temp = Math.floor(temp/10);

    }
    if(sum == n ){
        console.log(n);
    }


}