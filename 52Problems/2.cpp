#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, len;
    char n[101];
    scanf ( "%d", &t );
    for ( i = 1; i <= t; i++ )
    {
        scanf ( "%s", &n );
        len = strlen ( n );
        if ( n[len - 1] % 2 == 0 )
            printf ( "even\n" );
        else
            printf ( "odd\n" );
    }
    return 0;
}
