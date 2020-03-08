#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p = 0, n, dc = 114, i;
    for ( i = 0 ; i < dc ; i++ )
    {
        n = pow ( 2, i );
        if ( n < dc ) {}
        else break;
    }
    for ( int j = 0 ; j < i ; j++ )
    {
        if ( dc % 2 == 0 ) cout << "0";
        else cout << "1";
        dc = dc / 2;
    }
    return 0;
}

