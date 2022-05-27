#include <bits/stdc++.h>
using namespace std;

void movenegoneside(int arr[], int n)
{
    int arr1[] = {};
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            for (int j = 0; j < n; j++)
            {
                arr1[j]=arr[i];
                cout<< arr1[j] <<endl;
            }
            
            
        }
        
    }
    
}

int main()
{
    int arr[] = {-2, -1, 3, 0, 1, -2, 3};
    movenegoneside(arr, 7);

    return 0;
}