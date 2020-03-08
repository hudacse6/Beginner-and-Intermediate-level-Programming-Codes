#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[101];
    int  p;
    int n;
    cin >> n;
    for ( int j = 0 ; j <= n ; j++ )
    {
        int cont = 0;
        gets ( ar );
        p = strlen ( ar );
        if ( p <= 10 )
        {
            cout << ar << endl;
        }
        else
        {
            for ( int k = 1 ; k < p - 1 ; k++ )
            {
                cont++;
            }
            printf ( "%c%d%c\n", ar[0], cont, ar[p - 1] ) ;
        }
    }
    return 0;
}

