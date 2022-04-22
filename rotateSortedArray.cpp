/**
 * Rotated Sorted Array

Problem Statement
You are given an integer array arr sorted in ascending order. Before passing it to your function, the array is possibly rotated at unknown index k (1 <= k <= arr.length), such that resulting array is[arr[k], arr[k+1], ..arr[n-1], arr[0], arr[1], …, arr[k-1]].

For example, [1, 2, 3, 4, 5] might be rotated at index 3 and becomes [4, 5, 1, 2, 3]
Given an array arr after possible rotation and an integer target, return the index of the target element if it is present in arr, or -1 if it not in arr.
You must write an algorithm with O(logn) runtime complexity.

Constraint 
• 1 <= arr.length <= 5000
• -10^4 <= arr[i] <= 10^4
• All values of nums are unique.
• arr is an ascending array that is possibly rotated.
• -10^4 <= target <= 10^4

Input Format
• The first line of input consists of a space separated integers denoting the elements of an array.
• The second line of input consists of an integer denoting target element

Output Format
•Return the index if target element is present in arr or else return -1

Sample Input 1
5
3 4 5 1 2
1
Sample Output 1
3
Explanation of Sample 1
1 is present at index 3 in the array

Sample Input 2
5
5 1 2 3 4
6
Sample Output 2
-1
Explanation of Sample 2
6 is not present in the array

Sample Input 3
8
16 19 20 1 2 3 9 12
9
Sample Output 3
6
Explanation of Sample 3
9 is present at index 6

*/

#include<iostream>
#include<vector>
using namespace std;

int searchTargetIndex(vector<int> arr, int n , int target ){
        int start = 0 , end = arr.size()-1;
        int mid;

        while(start < end){
            mid = start + (end - start)/2;

            if(arr[mid] == target){
                return mid;
            }
            
            if(arr[mid] <= arr[end]){
                if(arr[mid] < target && target <= arr[end]){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }
            else{
                if(arr[start] <= target && target <= arr[mid]){
                    end = mid -1;
                }
                else{
                    start = mid+1;
                }
            }

        }
        return -1;

};

int main(){
    int n;
    // cout << "Enter Num : ";
    cin >> n;

    vector<int>arr;
    // cout << "Enter the Element of the Array : ";
    for(int i = 0;  i < n; i++){
        int val;
        cin >> val ;
        arr.push_back(val);
    }

    int target;
    // cout <<"Enter Target : ";
    cin >> target;

    cout << searchTargetIndex(arr , n, target);

    return 0;
}