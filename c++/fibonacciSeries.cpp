#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    // Base Case
    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }
    /// Recursive Case
    int smallOutput1 = fib(n-1);
    int smallOutput2 = fib(n-2);

    /// calculation
    return smallOutput1 + smallOutput2 ;
}


int main()
{
    cout<<fib(3);
    return 0;
}