#include<bits\stdc++.h>
using namespace std;
int main()
{
    char a, b, c;
    int a1, b1, c1, n, n1;
    cin >> a >> b >> c >> n;
    a1 = a;
    b1 = b;
    c1 = c;
    a1 = a1 + n;
    b1 = b1 + n;
    c1 = c1 + n;
    if ( a1 > 122 )
    {
        int n2 = a1 - 122;
        a1 = n2 + 96;
    }
    if ( b1 > 122 )
    {
        int n2 = b1 - 122;
        b1 = n2 + 96;
    }
    if ( c1 > 122 )
    {
        int n2 = c1 - 122;
        c1 = n2 + 96;
    }
    a = a1;
    b = b1;
    c = c1;
    cout << a << " " << b << " " << c << endl;
    a1 = a1 - n;
    b1 = b1 - n;
    c1 = c1 - n;
    if ( a1 < 97 )
    {
        int n2 = 97 - a1;
        a1 = 123 - n2;
    }
    if ( b1 < 97 )
    {
        int n2 = 97 - b1;
        b1 = 123 - n2;
    }
    if ( c1 < 97 )
    {
        int n2 = 97 - c1;
        c1 = 123 - n2;
    }
    a = a1;
    b = b1;
    c = c1;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
