// As for first occurence the value we find on the left side so that why end = mid-1 when arr[mid] == target
// For last occurence the value we find on the right side so start=mid+1 

#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n,int target ){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans=-1;

    while (start <= end)
    {

         mid = (start+end)/2;
        if (arr[mid] == target)
        {
            ans=mid;
            end = mid-1;
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
    return ans;
}

int main()
{  
    
   return 0;
}