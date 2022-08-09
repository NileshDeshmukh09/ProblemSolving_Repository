let arr = [1,4,3,2,6,3];
function bubbleSort(arr){
    for(let i = 0; i < arr.length-1; i++){ // Bcoz last Element is Already sorted !
        
        let is_swapped = false;
        for(let j = 0; j < arr.length-i-1; j++){
            if( arr[j] > arr[j+1] ){
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                //if is swapped atleast once set flag to true.
                is_swapped = true;
            }
        }
        if( is_swapped == false )break;

        // for(let i = 0; i < arr.length; i++){
        //    console.log(arr[i]);
        // }
        

        console.log("is_swapped : ", is_swapped);
    }
    return arr;
}



console.log(bubbleSort(arr));
// console.log(arr);