#include <iostream>
#include<vector>
using namespace std;

/*
1. 
    Enter N & K : 4 2
    Enter Array : 100 200 300 400
    output : 700

2. 
    Enter N & K : 4 4
    Enter Array : 100 200 300 400
    output : 1000

*/

class Solution{
    public:
        int maxSubArraySum(vector<int>arr, int n, int k)
        {
            /* approach 2 : ( Sliding Window ) */
            int strt = 0, end = 0;
            int sum = 0, maxx = 0;

            while( end < n ){

                sum += arr[end];

                if( (end - strt + 1) < k){
                    end++;
                }
                else if( (end -strt +1) == k ){
                    maxx = max(maxx , sum);
                    sum = sum - arr[strt];
                    strt++;
                    end++;
                }
            }
            /*

            approach-1 : (Brute Force)

                int maxSum = 0;
                for (int i = 0; i < n - k; i++)
                {
                    int sum = 0;
                    for (int j = i; j < k; j++)
                    {
                        sum += arr[j];
                    }
                    maxSum = max(maxSum, sum);
                    cout << sum << " ";
                }
                cout << " res : ";
                return maxSum;

            */
           
           return maxx;
        }
};

int main()
{
    int T;
    cout << " T : ";
    cin >> T;

    while(T--){

        int n, k;
        cout << "Enter N & K : ";
        cin >> n >> k;;
        vector<int> arr;

        cout << "Enter Array : ";
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution sol;
        cout << sol.maxSubArraySum(arr, n, k) << endl;

    }
    
    return 0;
}