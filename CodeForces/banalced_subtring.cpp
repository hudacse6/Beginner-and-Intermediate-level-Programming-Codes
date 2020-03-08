#include<bits/stdc++.h>
using namespace std;


int fun(int n)
{
    if(n==0 || n==1) return 0;
    return fun(n-2) + (n-1);
}

int main()
{
    int t,cas=0;
    scanf("%d",&t);
    while(t--)
    {
        cas++;
        int n,i,j,c=0;
        scanf("%d",&n);
        printf("Case %d: %d\n",cas,fun(n));
    }
    return 0;
}
