#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int searchElement){
    for(int i =0; i<size; i++){
        if(arr[i] == searchElement){
            cout << "Yipee!, the Number is " << searchElement ;
            return 1;
        }
    }
    return 0 ;
}

int main(){
     
    int arr[10] = { 23, 4, 6, 78, 45, 34, 78, 45, 25, 67};

    cout << "Enter the Element to search for :" << endl;
    int searchElement;
    cin >> searchElement;

    bool found =  linearSearch(arr, 10, searchElement);

    if( found ){
        cout << " Key is Present!"<< endl;
    }
    else{
        cout << " key is Not in the list"<< endl;
    }
    
    return 0;
}