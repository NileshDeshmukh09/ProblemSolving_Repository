#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> hm;

        for (int i = 0; i < nums.size(); i++)
        {
            hm[nums[i]]++;
            if (hm[nums[i]] > 1)
            {
                cout << "Condition True ! " << endl;
                return true;
            }
        }
        return false;
    }
};

int main()
{

    int TestCase;
    cout << "Enter T : ";
    cin >> TestCase;

    int num  = TestCase;
    vector<int> nums;

    while (TestCase > 0)
    {

        int n;
        cout << "Enter N : ";
        cin >> n;

        cout << "Enter Array[" << n << "] : ";
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            nums.push_back(element);
        }

        TestCase--;
    }

    Solution s;

    while (num > 0)
    {
        cout << s.containsDuplicate(nums);
        num--;
    }

    return 0;
}