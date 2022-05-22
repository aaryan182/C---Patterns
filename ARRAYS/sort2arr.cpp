#include <bits/stdc++.h>
using namespace std;

void sort2arr(int arr1[], int arr2[], int n, int arr3[])
{
    int i = 0, j = 0, t = 0;
    while (i < n && j < n)
    {
        if (arr1[i] < arr2[j])
            arr3[t++] = arr1[i++];
        else if (arr1[i] > arr2[j])
            arr3[t++] = arr2[j++];
        else
        {
            arr3[t++] = arr1[i++];
            j++;
        }
    }

    while (i < n)
    {
        arr3[t++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[t++] = arr2[j++];
    }
    for (int g = 0; g < t; g++)
        cout << arr3[g] << ",";
}

int main()
{
    int arr1[] = {2, 3, 4, 5};
    int arr2[] = {3, 4, 6, 7};
    int arr3[10] = {};
    sort2arr(arr1, arr2, 4, arr3);
    return 0;
}