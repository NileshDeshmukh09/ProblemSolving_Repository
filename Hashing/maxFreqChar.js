/* 
    Return the maximum Ocurrence of Character in string 
    "asddbed"
*/

function maxFreq(str){
    let hm = {};

    for(let i =0; i < str.length; i++){
        if(hm[str[i]] == undefined){
            hm[str[i]] = 1;
        }
        else{
            hm[str[i]] += 1
        }
    }

    let maxFreq = 0;
    let result = undefined;

    for(const [key, value] of Object.entries(hm)){
        if(maxFreq < value){
            result = key;
            maxFreq = value;
        }
    }
    return result;
}

console.log(maxFreq("abbfq"));



