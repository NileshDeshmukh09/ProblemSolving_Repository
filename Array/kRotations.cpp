#include<iostream>
#include<vector>
using namespace std;

void rotations(vector<int> arr , int i , int j){

    if(i==j)return ;

    swap(arr[i] , arr[j]);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
   }
   cout << endl;
}

int main(){
    int n;
    cout << "Enter Size : ";
    cin >> n;

    int K;
    cout << "Number : ";
    cin >> K;


    vector<int> ans ;
    
    cout << "Enter the Element of the Array : ";
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        ans.push_back(val);
    };

   rotations(ans , 0 , n-1);
   rotations(ans , 0 , K);
   rotations(ans , K+1 , n-1);

  
    
}