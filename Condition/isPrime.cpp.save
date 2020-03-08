#include <stdio.h>

//O(sqrt(n)) solution

int isPrime ( int n )
{
    int i;
    int x = sqrt ( n ) + 2;
    if ( n <= 1 ) return 0;
    if ( n % 2 == 0 ) return 0;
    for ( i = 3; i < x; i += 2 )
        if ( n % i == 0 ) return 0;
    return 1;
}

//O(sqrt(n)) solution
int main()
{
    int n;
    scanf ( "%d", &n );
    if ( isPrime ( n ) & 1 ) printf ( "Prime.\n" );
    else printf ( "Not Prime.\n" );
    return 0;
}

