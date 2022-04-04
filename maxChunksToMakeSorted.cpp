#include<iostream>
#include<vector>
using namespace std;

/**
 
Example 1:

    Input: arr = [4,3,2,1,0]
    Output: 1
    Explanation:
    Splitting into two or more chunks will not return the required result.
    For example, splitting into [4, 3], [2, 1, 0] will result in [3, 4, 0, 1, 2], which isn't sorted.

Example 2:

    Input: arr = [1,0,2,3,4]
    Output: 4
    Explanation:
    We can split into two chunks, such as [1, 0], [2, 3, 4].
    However, splitting into [1, 0], [2], [3], [4] is the highest number of chunks possible.

 */

class Solution{
    public:
        int maxChunksToSorted(vector<int>&arr){

            int maxVal = 0;
            int cnt = 0;

            for(int i = 0; i < arr.size(); i++){
                maxVal = max(arr[i], maxVal);

                if(maxVal == i)cnt++;
            }
            cout<< "max Chunks to sortedArray :" << endl;
            return cnt;
        }
};

int main(){

    int T;
    cout <<  "Enter TestCases :";
    cin >> T;

    while(T>0){    
        int N;
        cout << "Enter N : ";
        cin >> N;

        vector<int>arr;
        cout << "Enter Values of Array :" << endl;
        for(int i = 0; i< N; i++){
            int val;
            cin >> val;
            arr.push_back(val);
        }

        Solution sol;
        cout <<  sol.maxChunksToSorted(arr) << endl;

    }
    return 0;
}