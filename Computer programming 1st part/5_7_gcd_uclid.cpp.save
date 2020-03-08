#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, gcd = 0, t;
    cin >> a >> b;
    if ( a == 0 ) gcd = a;
    else if ( b == 0 ) gcd = b;
    else
    {
        while ( b != 0 )
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    cout << gcd;
    return 0;
}
