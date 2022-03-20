#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }

    }

    // returning Minimum value
    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    // returning max value
    return max;
}

int main()
{
    int size;
    cout << " The Number of Array you want to print "<< endl;
    cin >> size;
    int num[100];

    // taking input in Array
    for (int i = 0; i < size; i++)
    {
        cout<< i <<  " element of the  array is " << endl;
        cin >> num[i];
    }
    cout << " Maximum Value is :" << getMax(num, size) << endl;
    cout << " Minimum Value is :" << getMin(num, size) << endl;
}