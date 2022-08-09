
function insertionSort(arr){
    //Iteration should start from index 1, bcoz first element we consider Already Sorted !
    let n = arr.length;
    for(let i = 1; i < n ; i++){
        let curr_element = arr[i];// this is tbe element to be Inserted

        // We need to go to the left of the element toill we find the smaller one.

        let j = i-1;
        while( j >=0 && arr[j] > curr_element){
            // till the time you either go beyond the 0th Index or you can find a smaller element
            // we will do Replacements

            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =curr_element;

    }
}

let arr = [5,4,3,2,1];
insertionSort(arr);
console.log(arr);