#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x, gcd = 0;
    cin >> a >> b;
    if ( a < b )
    {
        x = a;
    }
    else
    {
        x = b;
    }
    for ( ; x >= 1 ; x-- )
    {
        if ( a % x == 0 and b % x == 0 )
        {
            gcd = x;
            break;
        }
    }
    cout << gcd;
    return 0;
}
