// using function

#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n = 0;
    cout << fib(n);
    return 0;
}


// without functions

// #include<iostream>
// using namespace std;


// int main(){
//     int N;
//     cin >> N;
    
//     int a = 0;
//     int b = 1;
//     int i = 1;
//     while (i <= N) {

//         int c = a;
//         a = b;
//         b = c + b;
        
//         i++;   
//     }

//         cout << a << " ";
// }