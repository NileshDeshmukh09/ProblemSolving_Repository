let arr = [ 1, 2, 4, 8, 5,6,10];
let target = 10;

// find the  element is present which has  target= sum;
function findPair( arr ,target ){

    var map = new Map();

    for( let i = 0; i < arr.length; i++){
        // Insert element in map if it not present 
        if( map.get(arr[i])){
            map.set( arr[i], arr[i]+1);          
        }
        // else increase count 
        else{
            map.set( arr[i], 1);
        }
    }
    let count=0;
    // Traverse through map to check if the key is present 
    for( let [ key , value ] of map){

        if(map.has(target - key)){
            console.log( key , target-key);
            count++;
            return;
           
        }
    }

    return count;
}

console.log( findPair( arr, target));