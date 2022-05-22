#include <bits/stdc++.h>
using namespace std;

void countZeroOneTwo(int arr[],int n){
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)      
        {
            countZero++;
        }
        else if(arr[i]==1){
            countOne++;
        }
        else if(arr[i]==2){
            countTwo++;
        }
        else
        {
            cout<<" ";
        }
        
        
    }

    int i =0;
    while (countZero--)
    {
        arr[i]=0;
        i++;
    }

    while (countOne--)
    {
        arr[i]=1;
        i++;
    }

    while (countTwo--)
    {
        arr[i]=2;
        i++;
    }

}

int main()
{  int arr[] = {1,1,2,0,2,0,1,2,0};
   countZeroOneTwo(arr,9); 
  

   return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {  
//    int arr[]= {1,2,43,24,422,12,10,5,8};
//    int size = 9;
//    int ans = sort(arr,arr+size);
//    cout<< ans <<endl; 
//    return 0;
// }