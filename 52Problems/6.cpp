#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;

    scanf("%d",&t);
    for (i=1 ; i<=t; i++)
    {
        scanf("%d",&n);

        printf("Sum = %d\n",n/10000+n%10);
    }
    return 0;

}

