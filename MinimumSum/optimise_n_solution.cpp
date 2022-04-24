#include <iostream>
#include <algorithm>
using namespace std;

int minnSum(int arr[], int N)
{
    /**
     * Track the value of Minnimum , put second_minn as Minn.
     *  -
     *      1. For the first, second Minn and Minn Both are at INT_MAX..
     *      2. Check for arr[i] < minn. replace the value of minn with arr[i].
     *      3. Check for else condition for the same the value less than minn , put it in variable
     */

    int minn = INT_MAX;
    int second_minn;

    for (int i = 0; i < N; i++)
    {

        if (arr[i] < minn)
        {

            second_minn = minn;
            minn = arr[i];
        }
        else
        {
            if (arr[i] < second_minn)
            {
                second_minn = arr[i];
            }
        }
    }

    return  minn + second_minn ;
}

int main()
{
    int T;
    cout << "Enter TestCases :";
    cin >> T;

    while (T--)
    {

        int N;
        cout << "Enter Num :";
        cin >> N;

        int arr[N];
        cout << "Enter the Element of the Array :";
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        cout << minnSum(arr , N);
       
       
    }
    return 0;
}