#include<bits/stdc++.h>
using namespace std;

int firstOccurence( int  a[] ,int low ,int high , int target , int size ){

    int res = -1;

    while( low <= high ){

        int mid = low + ( high - low )/2;

        if( target == a[mid] ){
            res = mid;
            // cout << res << endl;
            high = mid -1;
        }

        if( target < a[mid]){
            high = mid -1;
        }
        if( target > a[mid]){
            low = mid +1;
        }
    }

    return res ;

}

int main(){

    int target = 30 ;
    int a[] = { 10 , 30 , 30 , 30 , 30 , 30 , 40  };

    int size = sizeof(a)/sizeof(a[0]);

    int low = 0 , high = size-1;


   cout << "FirstCount at Index : "<< firstOccurence( a , low , high , target , size) <<endl;

  

    return 0;
}