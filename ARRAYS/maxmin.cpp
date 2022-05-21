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

int getMin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{
    int arr[] = {3, 4, 9, 6};
    getMax(arr, 4);
    cout << "Maximum value is :" << getMax(arr, 4) << endl;
    getMin(arr, 4);
    cout << "Minimum value is :" << getMin(arr, 4) << endl;

    return 0;
}