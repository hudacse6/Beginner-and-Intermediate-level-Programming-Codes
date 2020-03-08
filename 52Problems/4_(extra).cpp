#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
        {
            for( int j=0 ;j<n ; )
            {
                for( int k=n ; k>j ; k-- )
                {
                    printf("*");
                    continue;
                }

                printf("\n");


            }
       }
 return 0;
}
