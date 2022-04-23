#include<iostream>
#include<algorithm>
using namespace std;

/**
 * Time Complexity : nlogn
 * space : o(1)
 */

int main() {
	// your code goes here
	int T;
    cout << "Enter TestCases :";
	cin >> T;
	
	while(T>0){
	    int num;
        cout <<"Size of the Array : ";
	    cin >>num;
	    
	    int arr[num];
	    cout << "Element of the Array :";
	    for(int i = 0; i < num; i++){
	        cin >> arr[i];
	    }
	    
	   sort(arr , arr + num);
	   
	   int sum = arr[0] + arr[1];
	   cout << "Output : " << arr[0] << " + "<< arr[1] << " = ";
	   cout << sum << endl;
	    
	    
	    
	    T--;
	}
	return 0;
}
