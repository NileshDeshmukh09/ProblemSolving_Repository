#include<iostream>
using namespace std;

/**
 *  check if the String is palindrome or Not
 * 
 *  1. kyaak 
 *  2. kyasyak
 *  3. rcaecar
 *  4. Nitni
 * 
*/


int main(){

    int T;
    cout << "Enter TestCases : ";
    cin >> T;

    while(T>0){
        string str;
        cout << "Enter String : ";
        cin >> str;

        int n  = str.size();
        
        for(int i = 0; i < n/2 ; i++){
            if( str[i] != str[n-1-i] ){

                char x = str[i];
                str[i] = str[i+1];
                str[i+1] = x;
    
            }

        }
        bool ans = true;

        for(int i = 0; i < n/2 ; i++){
            if( str[i] != str[n-1-i] ){
                ans = false;
            }

        }
        if(ans){
            cout << str<< endl;
        }else{
            cout << -1 << endl;
        }

        T--;
    }

    return 0;
}