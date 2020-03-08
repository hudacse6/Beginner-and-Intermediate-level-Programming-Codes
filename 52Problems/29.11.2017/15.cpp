#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    char st[1001];
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        scanf ( " %[^\n]", st );
        int cont = 1 ;
        int len = strlen ( st );
        sort ( st, st + len ) ;
        for ( int i = 0; i < len; i++ )
        {
            if ( st[i] == st[i + 1] )
            {
                cont++;
            }
            else if ( st[i] != st[i + 1] )
            {
                printf ( "%c = %d\n", st[i], cont );
                cont = 1 ;
            }
        }
    }
    return 0;
}
