#include <bits/stdc++.h>
using namespace std;

void swapaltarr(int arr[], int n)
{   
    int i = 0; 
    for (i = 0; i < n; i += 2)
    {

        swap(arr[i], arr[i+1]);
    }
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8};
    swapaltarr(arr, 6);
    for (int i = 0; i < 6; i++)
   {
      cout << arr[i] << " ";
   }

    return 0;
}