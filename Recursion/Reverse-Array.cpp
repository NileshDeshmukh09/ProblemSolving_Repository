#include<bits/stdc++.h>
using namespace std;

// reverse the array 
void  reverse( int arr[], int i , int n){

    if( i >= n/2 ){
        return ;
    }

    swap( arr[i] , arr[n-i-1]);
    reverse( arr , i+1 , n);
};

int main(){

    int n;
    cout << "Enter the Size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Element Array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Reverse the array 
    reverse( arr , 0 , n);

     for(int i = 0; i < n; i++){
       cout << arr[i] << " ";
    }


}