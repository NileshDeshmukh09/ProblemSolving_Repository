// Input : strs = ["eat","tea","tan","ate","nat","bat"];
// Output : [["bat"],["nat","tan"],["ate","eat","tea"]];

let  strs = ["eat","tea","tan","ate","nat","bat"];

function groupAnagram( strs ){

    let map = new Map();
    
    for(let i = 0 ; i < strs.length; i++){
        
        let val = strs[i].split("").sort().join("");

        if( map.has(val) ){
            let arr = map.get(val);
            arr.push( strs[i]);
            map.set( val , arr);
        }else{
            map.set( val , [strs[i]] );
        }

       
    }
    let ans = [];
    for(let [ key , value ]  of map){
        // console.log(  ans.push(value));
        ans.push(value);
    }

    return ans;
}

console.log( groupAnagram( strs ));