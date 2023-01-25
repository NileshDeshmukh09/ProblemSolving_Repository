#include <bits/stdc++.h>
using namespace std;

/*

 For all most sorted list [ 1 2,3,4,6,5]
 Like for this testcase , we use INSERTION SORT  
 because we have to compare only single element !
 and it will take only single comparison with 5 to 6

*/

void insertionSort(vector<int> &A)
{

    int i, n = A.size(), idx, value;

    for (int i = 1; i < n; i++)
    {
        value = A[i];
        idx = i;

        while (idx > 0 && A[idx - 1] > value)
        {
            A[idx] = A[idx - 1];
            idx = idx - 1;
        }
        A[idx] = value;
    }
}

int main()
{

    vector<int> A = {7, 8, 1, 5, 4, 3, 2};

    insertionSort(A);

    for (int val : A)
        cout << val << " ";
}