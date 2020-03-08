#include<stdio.h>
int main()
{

    int i, n;
    int Tcase;
    scanf ( "%d", &Tcase );
    while ( Tcase-- )
    {
        long long int fact = 1;

        scanf ( "%d", &n );
        for ( i = 1 ; i <= n ; i++ )
        {
            fact = fact * i;
        }
        printf ( "%lld\n", fact );
    }
    return 0;
}

