#include<iostream>
using namespace std;

/**
 * 1.   TimeComplexity : O(n) , spaceComplexity : O(n)
*/

/**

int pow(int x , int n ){

    if(n == 0 ){
        return 1;
    }
    int partialAns = pow(x , n-1);
    return  x * partialAns;
}

int main(){
    int x ;
    cout << "Enter Num : ";
    cin >> x; 

    int n;
    cout << "Enter Power :";
    cin >> n;


    cout << pow(x , n);
    return 0;

}

*/

/** ------------------------- */

/**
 *  2.  Approach Two :
 * Time Complexity : log(n) , spaceComplexity : o(n);
*/

int pow(int x , int n ){

    if(n == 0 ){
        return 1;
    }
    int temp = pow(x , n/2);
    if( n % 2 == 1){
        return temp * temp * x ;
    }
    return  temp * temp;
}

int main(){
    int x ;
    cout << "Enter Num : ";
    cin >> x; 

    int n;
    cout << "Enter Power :";
    cin >> n;


    cout << pow(x , n);
    return 0;

}

