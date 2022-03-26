#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

/*
    The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

    Input : nums1 = [4,1,2]  ,  nums2 = [1,3,4,2]  ||  Output: [-1,3,-1]
    Input : nums1 = [2,4], nums2 = [1,2,3,4]  || Output: [3,-1]
 */

class Solution
{

public:
    vector<int> nextGreaterElement(vector<int> nums1, vector<int> nums2)
    {
        map<int, int> hashMap;
        stack<int> st;

        for (int i = 0; i < nums2.size(); i++)
        {

            while (!st.empty() && nums2[st.top()] < nums2[i])
            {
                hashMap[nums2[st.top()]] = nums2[i];
                st.pop();
            }

            st.push(i);
        }

        vector<int> finalAns;

        for (int i = 0; i < nums1.size(); i++)
        {
            if (hashMap.count(nums1[i]))
            {
                finalAns.push_back(hashMap[nums1[i]]);
            }
            else
            {
                finalAns.push_back(-1);
            }
        }

        return finalAns;
    }
};

int main()
{

    Solution solve;

    

    int n;
    // cout << "Enter n : ";
    cin >> n;

    vector<int> nums1;

    // cout << "Enter elements in nums1 :" << endl;
    for(int i = 0; i < n; i++){
       int val;
       cin >> val;

       nums1.push_back(val);
    }

    // cout << "nums1 Over !" << endl;
    
    int m;
    // cout << "Enter m: ";

    cin >> m;

    vector<int> nums2;
    // cout << "Enter elements in nums2 :" << endl;
    for(int i = 0; i < m; i++){
        int val;
       cin >> val;

       nums2.push_back(val);
    }
    // cout << "nums2 Over !" << endl;

    

    vector<int> temp;
    temp = solve.nextGreaterElement(nums1, nums2);
    // cout << "finalAns : ";
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }
    return 0;
}
