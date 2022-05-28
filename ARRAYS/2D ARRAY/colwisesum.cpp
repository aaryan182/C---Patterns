#include <bits/stdc++.h>
using namespace std;

void colsum(int arr[4][2], int row  , int col){
   for (int i = 0; i < row; i++)
   {
      int sum=0;
      for (int j = 0; j < col ; j++)
      {
         sum = sum + arr[i][j];
      }
      cout<<sum<<" ";
   }
   
   cout<<endl;
}

int main()
{  
   int arr[4][2] = { {1,2}, {2,3} , {3,4} , {4,5}};  
   colsum(arr,4,2);
   return 0;
}