#include<bits/stdc++.h>
using namespace std;
int a;
int main()
{
    char s[1001];
    int i, j, n;
    while ( gets ( s ) )
    {
        int len;
        int cout = 0;
        int word = 0;
        int value = 0;
        len = strlen ( s );
        for ( i = 0 ; i < len ; i++ )
        {
            // if( '0'>=i && i<='255' || s[i] != '\0')
            if ( '0' >= i && i <= '255' )
            {
                cout = value = 1;
                cout = i;
                printf ( "%d\n", value );
                value++;
            }
            else
            {
                cout = cout;
            }
        }
        printf ( "%d\n", cout );
    }
    return 0;
}
