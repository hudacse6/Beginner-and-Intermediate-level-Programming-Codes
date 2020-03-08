#include<bits/stdc++.h>
using namespace std;

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char st[1001];
    int tcase,  len, i;
    cin >> tcase;
    gets ( st );
    while ( tcase-- )
    {
        int cont = 1;
        gets ( st );
        len = strlen ( st );
        for ( i = 0 ; i < len ; i++ )
        {
            if ( st[i] == ' ' )
                cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
