// #include <iostream>
// using namespace std;

// void reverse(int arr[] , int start , int end){
//      while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }



// void printArray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
 
//    cout << endl;
// }

// int main()
// {  
//     int arr[100];
//    cout<<"enter the size of array " << endl;
//    int n;
//    cin>>n;

//    cout<<"enter the elements";
//    for (int i = 0; i < n; i++)
//    {  
//       cin>>arr[i];
//    } 

// reverse(arr ,0, n-1);
// cout<<"Reversed array is : "<<endl;
// printArray(arr,n);
//    return 0;
// }



// NEW WAY 

#include <iostream>
using namespace std;

void reverseArray(int arr[] , int n ){
   int i =0;
   int j = n-1;

   while (i<j)
   {
      swap(arr[i] , arr[j]);
      i++;
      j--;
   } 
   
}

int main()
{  
   int arr[] = {3,4,5,6,7,8} ;
   reverseArray(arr,7);

   for (int i = 0; i < 7; i++)
   {
      cout << arr[i] << " ";
   }
   
   cout<<endl;
   return 0;
}


