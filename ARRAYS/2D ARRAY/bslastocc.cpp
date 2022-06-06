#include <bits/stdc++.h>
using namespace std;

int lastOcc(int arr[],int n,int target ){
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
            start = mid+1;
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