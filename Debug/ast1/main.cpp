#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[1001];
    int tcase,cont=0,len;
    cin >> tcase;
    gets(st);
    while ( tcase-- )
    {
        gets(st);
        len = strlen ( st );
        for ( int i = 0 ; i < len ; i++ )
        {
            if ( st[i] == ' ' )
            {
                cont++;
            }
        }
        cout <<"value of " <<cont <<endl;
    }
    return 0;
}
