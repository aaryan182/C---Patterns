#include <bits/stdc++.h>
using namespace std;

int minSwaps(int arr[], int size, int k)
{
    // find window size
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= k)
        {
            cnt++;
        }
    }

    // creating first window
    int bad = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > k)
        {
            bad++;
        }
    }

    // check for remaing values
    int ans = 0;
    for (int i = 0, j = 0; j = cnt; i++, j++)
    {
        // check old element
        if (arr[i] > k)
        {
            bad--;
        }
        if (arr[j] > k)
        {
            bad++;
        }
        ans = min(ans, bad);
    }
    return ans;
}

int main()
{
    int arr[5] = {2, 1, 5, 6, 3};

    return 0;
}
}