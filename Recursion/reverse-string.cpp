#include <bits/stdc++.h>
using namespace std;

// Reverse the string

bool reverseOne( string str , int i ,int  n){

    if( i >= n/2 ){
        return true;
    }  
    if( str[i] !=  str[ n- i-1 ] ){
       return false;
    } 
    return reverseOne( str , i+1 , n );
   
}

int main()
{
    string str ;
    cout << "Enter String : ";
    cin >> str ;
    
    // Reverse the function
    
    if( reverseOne( str , 0 , str.length()) ){
        cout << "String is Palindrome ";
    }else {
         cout << "String is Not Palindrome";
    }
    
    

    return 0;
}