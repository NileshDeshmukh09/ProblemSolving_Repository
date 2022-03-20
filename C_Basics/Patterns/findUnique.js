let arr = [2,3,5,5,3,2,8];
let result = 0;

for(let i = 0; i < arr.length; i++){
    result = result ^ arr[i];
}
console.log(result);
