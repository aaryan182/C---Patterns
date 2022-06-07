//  find fixed pt in the sorted array 
// fixed pt is where value = index 

// ex {-10,-5,0 , 3 ,7}


#include <bits/stdc++.h>
using namespace std;

int bsFixedPt(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        mid = (start + end) / 2;
        if (mid == target)
        {
            return mid;
        }
        else if (target < mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-10,-5,0 ,3 ,7};
    int n = 5;
    int target = 3;
    cout << bsFixedPt(arr, n, target) << endl;

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
