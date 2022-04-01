#include<iostream>
#include <vector>
using namespace std;

class Solution{
	public:
		vector<int> getDigits(int num){
			vector<int> arr;
			// if( !num ){
			// 	return arr;
				
			// }

			int r = num %10;
			
			getDigits(num/10);
			
			return " ";
		}
};

int main() {
	// your code goes here
	int T;
	cout << "Enter T : ";
	cin >> T;

	while(T--){
		
		int num;
		cout <<"Enter Num : ";
		cin >> num;

		Solution sol;
		vector<int> ans =  sol.getDigits(num);

		for(int i = 0; i <ans.size(); i++){
			cout << ans[i]<< " ";
		}
	}
	
	
	
	return 0;
}