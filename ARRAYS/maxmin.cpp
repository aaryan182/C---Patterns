#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main()
{
    int arr[] = {3, 4, 9, 6};
    getMax(arr, 4);
    cout << "Maximum value is :" << getMax(arr, 4) << endl;
    return 0;
}