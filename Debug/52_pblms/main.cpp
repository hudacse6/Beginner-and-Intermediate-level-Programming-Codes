#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n,i;
    scanf("%d",&n);
    for ( i=0 ; i<n ; i++)
    {

        scanf("%d",&t);

        for(  i = 1 ; i < =t; i++)
        {
            if( t % i == 0 )
            {
                printf("%ld\n",t);
            }

        }

    }
    return 0;
}

