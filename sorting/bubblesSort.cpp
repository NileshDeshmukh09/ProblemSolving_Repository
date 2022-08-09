#include<iostream>
#include<vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr, int n ){

    for(int i = 0; i < n; i++){

        int is_swapped = false;

        for(int j = 0; j < n-i-1 ; j++){
            if( arr[j] > arr[j+1] ){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                is_swapped = true;
            }

        }
         if( is_swapped == false )break;
    }

    for(int i = 0 ; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl ;
    return arr ;
};

int main(){

    int n = 5;
    vector<int> arr =  { 2,4,6,8,3};

    bubbleSort(arr, n);

    

    
    return 0;
}