#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    int p=0;
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
        scanf("%d",&t);
        printf("Case %d:",i);
        for(  j = 1 ; j <= t; j++)
        {
            if( t % j == 0 )
            {
                p=j;
                printf(" %d",p);
            }
        }
        printf("\n");
    }
    return 0;
}

