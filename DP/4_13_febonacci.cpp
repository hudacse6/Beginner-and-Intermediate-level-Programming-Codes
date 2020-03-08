#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
   int n=10,k;
   k=fib(n);
   printf("%d",k);
   return 0;
}
