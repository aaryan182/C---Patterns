#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    int total = n * n;
    int startingRow = 0, startingCol = 0, endingRow = n - 1, endingcol = n - 1;
    n=(n+1)/2;
    while (n--)
    {
        for (int i = startingCol; i <= endingcol; i++)
        {
            cout << arr[startingRow][i] << " ";
        }
        startingRow++;

        for (int i = startingRow; i <= endingRow; i++)
        {
            cout << arr[i][endingcol] << " ";
        }
        endingcol--;

        for (int i = endingcol; i >= startingCol; i--)
        {
            cout << arr[endingRow][i] << " ";
        }
        endingRow--;

        for (int i = endingRow; i >= startingRow; i--)
        {
            cout << arr[i][startingCol] << " ";
        }
        startingCol++;
    }

    return 0;
}