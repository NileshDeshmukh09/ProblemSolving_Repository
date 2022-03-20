// # include <stdio.h>

// int linearSearch(int arr[], int size, int element){
//     for(int i = 0; i<size; i++)
//     {
//         if(arr[i] == element){
//             return i;
//         }
        

//     }
//     return -1;
// }

// int BinarySearch(int arr[], int size, int element){
//     int low, mid, high;
//     low = 0;
//     high = size -1;
//     mid = (low + high)/2;

//     while(low <=high){

//         // Searching Starts

//         if (arr[mid] == element){
//             return mid;
//         }
//         else if (arr[mid] < element){
//             low = mid +1;
//         }
//         else{
//             high = mid - 1;
//         }
//         // Searching Ends

//     }
//     return -1;

// }

// int main(){
//     // // Unsorted array for linear Search
//     // int arr[] = { 3,5,6,355,8787,42,868,990};
//     // int size = sizeof(arr)/sizeof(int);

//     //Sorted array for Binary Search.
//     int arr[] = { 3,5,6,42,355,435,650, 655,677,765,875,1334,3456};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 650;
//     int searchIndex = BinarySearch(arr, size, element);
//     printf(" The element %d was found at Index %d \n", element, searchIndex );

    
//     return 0;
// }


// ---------------------........................----------------------

# include <stdio.h>

int main(){
    int i;
    int size =4;
    int capacity = 6;
    int arr[i];
    int element;

    if(size<=capacity){
    for( i=0; i <= size; i++){
        printf("Enter the %d element of array :\n", i);
        scanf("%d", &arr[i]);        
    };
    }else if(siz)
   

    
    return 0;
}