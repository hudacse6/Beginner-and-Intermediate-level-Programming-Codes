#include<stdio.h>

int main()
{
    int i;
    for ( i = 1000 ; i > 0 ; i-- )
    {
        if ( i % 5 == 0 )
        {
            printf ( "\n" );
        }
        printf ( "%d\t", i );
    }
    return 0;
}


