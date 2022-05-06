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
#include<vector>
using namespace std;

vector< int > maxTwiceElement(vector<int> arr , int n ){
    unordered_map < int , int > mp;

    for(int i = 0;  i < n; i++){
        mp[arr[i]]++;
    }

    for(auto i : mp){
        if(i.second > 2){
            arr.push_back(i.first);
            arr.push_back(i.first);
        }else{
            arr.push_back(i.first);
        }
    }
     for(int i = 0;  i < n; i++){
       cout << arr[i] << " ";
    }
    cout << endl;

    return arr;
};

int main(){

    vector <int> arr= { 1,2,2,3,3,3,4,4,6 };

    int n =arr.size();
    cout << "Size of Array : " << n << endl;

    maxTwiceElement(arr, n);  
    return 0;
}
