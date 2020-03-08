#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    char st[1001];
    char st2[1001];
    cin >> tcase;
    while ( tcase-- )
    {
        int i, k ;
        scanf ( " %[^\n]", st );
        int len = strlen ( st );
        int temp;
        for ( i = 0, k = 0 ; i < len ; i++ )
        {
            if ( st[i] != ' ' )
            {
                st2[k] = st[i];
                k++;
            }
            else
            {
                cout<<strrev(st2);
            }

        }

    }
    return 0;
}

