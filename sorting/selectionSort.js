
let arr = [5,2,6,7,2,1,0];
console.log(arr);

console.log(selectionSort(arr));

console.log("Hii")

//Start Denotes the index from where the unsorted Region Starts
function findMinIndex(arr, start){
    let min_indx = start; // We will assume that the first element of unsorted Region
    for(let i = start+1; i , arr.length; i++){
        if(arr[i] < arr[min_indx]){
            //then we have found a new minimum....
            min_indx = i;
        }
    }
    return min_indx;
}

function selectionSort(arr){
    for(let i = 0; i < arr.length-1; i++){
        let min_indx = findMinIndex(arr, i);
        if( i != min_indx){
            let temp = arr[i];
            arr[i] = arr[min_indx];
            arr[min_indx] = temp;
        }
    }
    console.log("HIi")
}