#include <bits/stdc++.h>
using namespace std;

bool pallin(int arr[] , int n){
    int i =0;
    int j = n-1;

    while (i<j) 
    {
        if (arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else
        {
           return false;
        }
        
    }

    return true;
        
}

int main()
{  
   int arr[] = {1,2,3,3,2,1} ;
   cout<<pallin(arr,6);

   return 0;
}