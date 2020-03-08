#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k,l;
    scanf("%d",&n);
    for (i=0 ; i<n; i++)
    {
        scanf("%d",&t);

        for( j=0,l=0; j<t,l<t; j++,l++ )
        {
            for(k=0; k<t-j+l; k++)
            {
                printf("*");
            }
            printf("\n");
        }

    }

    return 0;
}
