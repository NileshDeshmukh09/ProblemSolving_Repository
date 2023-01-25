#include<bits/stdc++.h>
using namespace std;

int recursive( int a , int n){

    if( n == 0 ){
        return 1;
    }

    if( n == 1 ) return a;

    if( n%2 == 0 ){
        int res = recursive(a , n/2 );
        return res* res ;
    }else {
        return a * recursive( a , n - 1 );
    }
}

int main(){

    int a , n ;
    cout <<"Enter  : ";
    cin >> a >> n ;

    int res = recursive( a , n );
    cout << res << endl;

}