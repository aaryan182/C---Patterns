#include <iostream>
using namespace std;

void printevennumber(int n) {
    for (int i = 2; i <=n; i+=2)
    {
        cout<<i<<endl;
    }
    
}

int main()
{  
   int num =15;
   printevennumber(num); 
   return 0;
}