#include <bits/stdc++.h>
using namespace std;

void printF( int idx , vector<int>&sqs , int arr[] , int n ){

    if( idx == n ){
        
        for( auto it : sqs){
            cout << it << " ";
        }

        if( sqs.size() == 0 ){
            cout <<  "{}";
        }
        cout << endl;
        return ;
    }

    // not pick , or not take condition , this element is not added to subseqence 
    printF( idx +1 , sqs , arr , n );

    // take or pick the particular index int into the subsequence 
    sqs.push_back( arr[ idx ]);
    printF( idx +1 , sqs , arr , n);
    sqs.pop_back();
}

int main(){

    int arr[] = { 3 , 1 , 2};
    int n = 3;

    vector<int> sqs;
    printF( 0 , sqs , arr , n );
    return 0;
}