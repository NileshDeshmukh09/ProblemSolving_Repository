/**
 * Flatten the Array 
 */

let arr = [1, 2, [3, 4, [5, 6, [7, 8, 9]]]];

// if the nested array is uncounted , then  we have to put INFINITY in place of Number.
// using JS function
// console.log(arr.flat(2)) 

function flattenArray(arr) {
    newArr = [];
    function getFlattenArr(arg){

        arg.map((data) => {
            if (Array.isArray(data)) {
                getFlattenArr(data);
            } else {
                newArr.push(data);
            }
        })

        // console.log( Array.isArray( element ) )
    };
    getFlattenArr(arr);
    return newArr;
}

console.log( flattenArray(arr) );
