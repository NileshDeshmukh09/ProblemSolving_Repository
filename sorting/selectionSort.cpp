#include <iostream>
#include <vector>
using namespace std;

//Start Denotes the index from where the unsorted Region Starts
int findMinIndex(vector<int>arr, int n, int start){
   int  min_index = start; // first element of the unsorted region

   for(int i = start +1; i < n; i++){
       if(arr[i] < arr[min_index]){
           // then we have a new Minimum.....
           min_index = i;
       }
   }
    return min_index;
}

vector<int> selectionSort(vector<int> arr, int n){
    for(int i=0; i < n-1; i++){
        int min_index = findMinIndex(arr, n, i);
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;

         

    }

    for(int i = 0 ; i <n; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;

    return arr;
}

int main(){
    
    int n = 8;
    vector<int> arr = { 5,2,6,7,2,1,0,3 };
    selectionSort(arr, n);
    return 0;
}