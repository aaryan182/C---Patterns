#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{  
   int arr[5] = {1,2,3,4,5}; 
   printArray(arr ,5);

    // creation 
    
    // int arr1[10];
    // int arr2[] = {1,23,44,4};
    // int arr3[33] = {33,4,55,5};
    // int arr4[20] = {0};
   return 0;
}