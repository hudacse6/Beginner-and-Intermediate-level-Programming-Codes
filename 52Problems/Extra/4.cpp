#include<stdio.h>
#include<string.h>

int main()
{
    int Tcase, i, n,j;
    scanf ( "%d", &Tcase );
    for ( i = 1 ; i <= Tcase ; i++ )
    {
        scanf ( "%d", &n );
        printf("Case %d:",i);
        for ( j = 1 ; j<=n ; j++ )
        {
            if ( n % j == 0 )
            {
               printf ( " %d", j );
            }
        }
        printf ( "\n");
    }
    return 0;
}


