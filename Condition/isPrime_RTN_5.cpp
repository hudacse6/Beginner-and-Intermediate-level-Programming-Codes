#include <bits/stdc++.h>
using namespace std;

// O(sqrt(n)) solution

int isPrime ( int n )
{
    int i;
    int x = sqrt ( n ) + 2;
    if ( n <= 1 )
        return 0;
    if ( n % 2 == 0 )
        return 0;
    for ( i = 3; i < x; i += 2 )
        if ( n % i == 0 )
            return 0;
    return n;
}

// O(sqrt(n)) solution
int main()
{
    int n;
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        scanf ( "%d", &n );
        if ( isPrime ( n )  )
            printf ( "Prime.\n" );
        else printf ( "Not Prime.\n" );
    }
    return 0;
}


