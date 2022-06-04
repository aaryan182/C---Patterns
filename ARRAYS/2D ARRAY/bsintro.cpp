#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while (start <= end)
    {

         mid = (start+end)/2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (target < arr[mid]) 
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

    }
    return false;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = 7;
    int target = 6;

    cout<< binary_search(arr,arr+n,target) <<endl;
    cout<< binarySearch(arr,n,target) <<endl;

    return 0;
}



// leetcode solution 
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int start = 0;
//     int end = n-1;
//     int mid = start + (end-start)/2;

//     while (start <= end)
//     {

//          mid = start + (end-start)/2;
//         if (nums[mid] == target)
//         {
//             return mid;
//         }
//         else if (target < nums[mid]) 
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }

//     }
//     return -1;
// }
// };


