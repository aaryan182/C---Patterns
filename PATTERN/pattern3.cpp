#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int space = n - 1;
     for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < space; col++)
            cout << " ";
        for (int col = 0; col <= row; col++)
             cout << "*";

        cout << endl;
        space--;

    }

        space = 0 ;
        for (int row = n; row > 0; row--)
        {
            for (int col = 0; col < space; col++)
                cout << " ";
            for (int col = 0; col < row; col++)
                cout << "*";

            cout << endl;
            space++;
        }
 }