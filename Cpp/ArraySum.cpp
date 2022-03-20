#include<iostream>
using namespace std;



int main(){

    int size;
    cout << " Size of Array is :" << endl;
    cin >> size;   

    int arr[15];
    int sum =0;

    for( int i=0; i<size; i++ ){
          cout << i << " element of the Array is :";
          cin >> arr[i] ;
          sum = sum + arr[i];
         
    }
          cout <<"\n" << "Sum of All the elements in the Array is : \nff " << sum ;


   
    return 0;

}