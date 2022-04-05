#include <iostream>
#include <vector>
using namespace std;

/**
Example 1:

    Input: arr = [5,4,3,2,1]
    Output: 1
    Explanation:
    Splitting into two or more chunks will not return the required result.
    For example, splitting into [5, 4], [3, 2, 1] will result in [4, 5, 1, 2, 3], which isn't sorted.

Example 2:

    Input: arr = [2,1,3,4,4]
    Output: 4
    Explanation:
    We can split into two chunks, such as [2, 1], [3, 4, 4].
    However, splitting into [2, 1], [3], [4], [4] is the highest number of chunks possible.

*/

class Solution
{

public:
    int maxChunksToSorted(vector<int> &arr)
    {

        int n = arr.size();
        vector<int> leftMax;
        vector<int> rightMin(n);
        int maxx = 0;
        int minn = INT_MAX;
        int countChunk = 1;

        // leftMax has maxElement from starting !
        for (int i = 0; i < n; i++)
        {
            maxx = max(arr[i], maxx);
            // cout << "Maxx : " << maxx << endl;
            leftMax.push_back(maxx);
        }

        // RightMin has all the minValue to index !
        for (int j = n - 1; j >= 0; j--)
        {
            minn = min(arr[j], minn);
            // cout << "Minn : " << minn << endl;
            rightMin[j] = minn;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (leftMax[i] <= rightMin[i + 1])
            {
                countChunk++;
            };
        }
        // Return Count Chunk !
        cout << "countChunk : ";
        return countChunk;
    };
};

int main()
{

    int T;
    cout << "Enter TestCases :";
    cin >> T;

    while (T > 0)
    {

        int N;
        cout << "\nEnter N : ";
        cin >> N;

        vector<int> arr;

        cout << "Enter Array Element :" << endl;
        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        Solution sol;

        // cout << "Output of Array : ";
        cout << sol.maxChunksToSorted(arr);

        T--;
    }

    return 0;
}