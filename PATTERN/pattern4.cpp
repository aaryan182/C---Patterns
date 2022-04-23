#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int space=0;
    for (int  row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}