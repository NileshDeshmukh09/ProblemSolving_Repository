#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*

1.

Input: mat = [[1,1,0,0,0],[1,1,1,1,0],[1,0,0,0,0],[1,1,0,0,0],[1,1,1,1,1]],
k = 3
Output: [2,0,3]
Explanation:
The number of soldiers in each row is:
- Row 0: 2  | Row 1: 4  | Row 2: 1  | Row 3: 2  | Row 4: 5
The rows ordered from weakest to strongest are [2,0,3,1,4]

2.

Input: mat = [[1,0,0,0] ,[1,1,1,1], [1,0,0,0], [1,0,0,0]],
k = 2
Output: [0,2]
Explanation:
The number of soldiers in each row is:
- Row 0: 1  | Row 1: 4  | Row 2: 1  | Row 3: 1
The rows ordered from weakest to strongest are [0,2,3,1].

*/

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<pair<int, int>> arr;

        int row = mat.size();
        int col = mat[0].size();

        for (int i = 0; i < row; i++)
        {
            int cnt = 0;
            for (int j = 0; j < col; j++)
            {
                cnt += mat[i][j];
            }
            arr.push_back({cnt, i});
        }

        sort(arr.begin(), arr.end());

        // for(int i = 0; i < arr.size(); i++){
        //     cout << arr[i].first << " , " << arr[i].second<< endl;
        // }

        vector<int> ans;

        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};

int main()
{

    Solution solve;
    // vector<vector<int>> mat;
    vector<vector<int>> mat{
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1},
    };

   
    

    int k = 3;
    cout << "Enter K : " << k << endl;
    // cin >> k;
    vector<int> finalAns = solve.kWeakestRows(mat, k);

    for (int i = 0; i < finalAns.size(); i++)
    {
        cout << finalAns[i] << " ";
    }
    return 0;
}