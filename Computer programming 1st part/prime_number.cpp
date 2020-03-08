#include<bits/stdc++.h>
using namespace std;
int is_prime ( int n )
{
    int i, root;
    if ( n == 2 ) return 1;
    if ( n % 2 == 0 ) return 0;
    root = sqrt ( n );
    for ( i = 3; i <= root; i = i + 2 )
    {
        if ( n % i == 0 )
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m;
    int tcase;
    cin>>tcase;
    while ( tcase-- )
    {
        printf ( "Please enter a number :\n " );
        scanf ( "%d", &n );

        if ( 1 == is_prime ( n ) )
        {
            printf ( "%d prime.\n", n );
        }
        else
        {
            printf ( "%d not prime.\n", n );
        }
    }
    return 0;
}
