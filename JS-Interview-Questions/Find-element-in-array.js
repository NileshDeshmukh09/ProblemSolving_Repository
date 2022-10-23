
// // Find the Index of the Element in Array 

let nums = [2 , 4, 5, 7,8 , 9];
target = 4;

// // using Reduce
// var search = function(nums, target) {
    
//     let n = nums.reduce(( getIndex , curr , idx )=>{
//         if( target == curr ){          
//             getIndex = idx
//         }
//         return getIndex;
//     }, -1);

//     //using FIND
//     // let newArr = nums.find( item => item == target);
//     // return nums.indexOf(newArr);
    
//     return n;
// };

// console.log("search :" , search(nums , target ));
// // console.clear();

// If the given arrray is Sorted  , then Binary search is the best approach
//BINARY SEARCH
function binarySearch( nums , target ){
    
    let start = 0, end = nums.length -1;
    
    let mid = start + ( end - start)/2;
    while( start <= end ){

        if( nums[mid] == target ){
            return mid;
        }

        if( nums[mid] > target ){
            end = mid -1;
        }else{
            start = mid+ 1;
        }
    }
    console.log("MID :", mid);
    return mid;
}

console.log( "binary search :", binarySearch( nums , target ));

