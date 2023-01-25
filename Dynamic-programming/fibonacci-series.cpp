#include<bits/stdc++.h>
using namespace std;

// Memoization
int fun( int n , vector<int> &dp){
    if( n <= 1 ) return n;
    if( dp[n] != -1 ) return dp[n];
    return dp[n] = fun( n-1 , dp) + fun( n-2 , dp);
}

//Tabulation
int tabulation( int n , vector<int>&dp){
    dp[0] = 0 , dp[1] = 1;
    for( int i = 2; i <= n ; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    return dp[n];
}

int main(){
    int n ;
    cout <<"Enter the Number :";
    cin >> n;
    vector<int> dp( n+1 , -1);  
    cout << "Output : " << fun( n , dp );
    return 0;
}