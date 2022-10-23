// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string str = "avcderttghnnnfgrtnnnnfrtrtnn";
    int n = 26;
    int arr[n] = {0};
    for(int i = 0; i < str.length(); i++){
        arr[str[i] - 'a']++;
    }
    int maxx = arr[0];
    int val;
    char ch;
    
    for(int i = 0; i < n; i++){
        if( maxx < arr[i]){
            maxx = arr[i];
            val = i + (int)'a';
            ch = char(val);
            
        } 
        cout << arr[i]<< " ";
    }
    cout << endl;
    
    cout << "MaxOccrenceCharacter : " << ch << " - "<< maxx << endl;
  
    
    

    return 0;
}