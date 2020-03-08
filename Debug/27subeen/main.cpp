#include<bits/stdc++.h>
using namespace std;

int seive ( int p[] )
{
    int i, j, k;
    memset ( p, -1, sizeof ( p ) ) ;
    int k1=sizeof ( p ) / 4 ;
    for ( i = 2 ; i <= k1; i++ )
    {
        if ( p[i]  == -1 )
        {
            for ( j = 2 ; i * j <= sizeof ( p ) / 4 ; j++ )
            {
                p[i * j] = 0;
            }
        }
    }
    for ( k = 0 ; k <= k1; k++ )
    {
        if ( p[i * j] != 0 )
        {
            cout << p << endl;
        }
    }
}

int main()
{
    int n[100];
    seive ( n );
    return 0;
}
