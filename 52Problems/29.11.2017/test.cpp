#include<bits/stdc++.h>
using namespace std;

void seive ( int p[] )
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
    int n=30;
    seive ( n );
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100001];
    for ( int l = 0 ; l <= sizeof ( arr ) / 4 ; l++ )
    {
        arr[l] = -1;
    }

    for ( int i = 2 ; i <= sizeof ( arr ) / 4 ; i++ )
    {
        if ( arr[i] == -1 )
        {
            for ( int j = 2 ; i * j <= sizeof ( arr ) / 4 ; j++ )
            {
                arr[i * j] = 0;
            }
        }
    }
    for ( int p = 0 ; p <= sizeof ( arr ) / 4 ; p++ )
    {
        if ( arr[p] == -1 )
            printf ( " %d\n ", p );
    }
    return 0;
}
  */
