#include<bits/stdc++.h>
using namespace std;
int f_calls=0;
int add_all(int n)
{
    f_calls=f_calls+1;
    if(n<=1)
        return n;
    else
        return(n*add_all(n-1));
}

int main()
{
   int a;
   a=add_all(4);
   cout<<a;
   cout<<"\n";
   cout<<f_calls;
   return 0;
}

