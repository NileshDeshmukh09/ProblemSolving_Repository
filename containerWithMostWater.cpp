#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int maxArea(vector<int>&height){

            int n = height.size();
            int start = 0, end = n-1;
            int finalAns = 0;

            while(start <= end){
                int ht = min( height[start] , height[end] );
                int len = end- start;

                finalAns = max( ht*len , finalAns );

                if(height[start] > height[end]){
                    end--;
                }else{
                    start++;
                }

            }
            cout << "MaxArea of water Container :" << endl;
            return finalAns;

        }
};

int main(){
   
    int N;
    cout << "Enter N : ";
    cin >> N;

    vector<int>height;

    cout <<"Enter the Array Element : " << endl;
    for(int i = 0; i < N; i++){
        int val;
        cin >> val;

        height.push_back(val);
    }
    Solution sol;
    cout << sol.maxArea(height);
    return 0;
}