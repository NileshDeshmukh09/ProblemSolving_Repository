/*
 Given a sorted array. 
 Your task is to reduce it such that, each element can appear maximum twice.

    Input
    [ 1,2,2,3,3,3,4,4,6]

    Output
    [1,2,2,3,3,4,4,6]

*/

#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

vector< int > reduceArray(vector<int> arr , int n ){
    int j = 0;
    for(int i = 0; i < n; i++){

        if(i < n-2  && arr[i] == arr[i+2] && arr[i] == arr[i+1]){
            cout << "if : " << arr[i] << " ";
            continue;
        }else{
            arr[j] = arr[i];
            cout << "else : "<< arr[i] << " ";
            j++;
        }
        cout << endl;
        
    }

    for(int  i = 0; i < j; i++){
        cout << arr[i] << " ";
    }

    return arr;
};

int main(){

    vector <int> arr= { 1,2,2,2,3,3,3,4,4,6 };

    int n =arr.size();
    cout << "Size of Array : " << n << endl;

    reduceArray(arr, n);  
    return 0;
}
