#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1001];
    int len, i, ws = 1;
    len = strlen ( gets ( str ) );
    for ( i = 0; i < len; i++ )
    {
        if ( ( str[i] >= 'A' && str[i] <= 'Z' ) || ( str[i] >= 'a' && str[i] <= 'z' ) || ( str[i] >= '0' && str[i] <= '9' ) || str[i] == ' ' )
        {
            if ( str[i] != ' ' )
            {
                if ( ws == 0 )
                {
                    cout << str[i];
                }
                if ( ws == 1 )
                {
                    if ( str[i] >= 'a' && str[i] <= 'z' )
                    {
                        str[i] = str[i] - 32;
                        cout << str[i];
                        ws = 0;
                    }
                    else
                    {
                        cout << str[i];
                        ws = 0;
                    }
                }
            }
            else if ( str[i] == ' ' )
            {
                cout << endl;
                ws = 1;
            }
        }
    }
    return 0;
}
