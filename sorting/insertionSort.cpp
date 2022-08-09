#include<iostream>
#include<vector>
using namespace std;

// TC : O(n^2)
// SC : O(1)

vector<int> insertionSort(vector<int> arr, int n ){

    for(int i = 1; i < n; i++){
        int curr_element = arr[i];

        int j = i-1;
        while( j >= 0  && arr[j] > curr_element ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr_element;

    }
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << ' ';
    }
    return arr;
}

int main(){
    int n  = 5;
    vector<int> arr = { 2,5,9,5,4};

    insertionSort(arr , n);



    return 0;
}