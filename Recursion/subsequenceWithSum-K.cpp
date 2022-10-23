#include<iostream>
#include<vector>
using namespace std;

// print all the subsequence whose sum is K .
void printS( int idx , vector<int> nd , int S , int sum , int arr[] , int n ){

    if( idx == n ){
        if( S == sum ){
        cout << "Subsequence of the given Array is :" << endl;
            for( auto i : nd )
                cout << i << " ";
            cout << endl;
                 
        }
         return ;
    }

    // add the element in the vector and sum 
    nd.push_back( arr[idx] );
    S += arr[idx];
    printS( idx +1 , nd , S , sum , arr , n );

    // Remove the Added Element and substract from sum 
    nd.pop_back();
    S -= arr[idx];
    printS( idx +1 , nd , S , sum , arr , n );

};

int main(){

    // Given : Array , K
    int arr[] = { 1 ,2 ,1};
    int n = 3;
    int sum = 2;

    vector<int>nd;
    printS( 0 , nd , 0 , sum , arr , n );

    return 0;
}
