#include <iostream>
using namespace std;

bool lsearch(int arr[], int size , int tgt){
   for (int i = 0; i < size; i++)
      if (arr[i] == tgt)
         return true;
   return false;   
}

int main()
{  
   int arr[100];
   cout<<"enter the size of array " << endl;
   int n;
   cin>>n;

   cout<<"enter the elements";
   for (int i = 0; i < n; i++)
   {  
      cin>>arr[i];
   }

   int tgt ;
   cin>>tgt; 

   int result = lsearch(arr, n, tgt);
   (result == 0)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
   
   

   return 0;
}