// kadane's algo is larest sum of conitnous subarray

#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
   int sum = 0;
   int ans = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      sum = sum + arr[i];
      ans = max(ans, sum);
      if (sum < 0)
      {
         sum = 0;
      }
   }

   return sum;
}

int main()
{
   int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   cout<< kadane(arr, 7);
   return 0;
}