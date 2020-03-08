#include<bits/stdc++.h>
using namespace std;

int add_all(int n)
{
    if(n<=1)
        return n;
    else
        return (n*add_all(n-1));
}

int main()
{
    int a=5;
    int ad=add_all(a);
    cout<<ad;
}
