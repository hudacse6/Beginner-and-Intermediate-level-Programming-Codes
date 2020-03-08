#include<bits/stdc++.h>
using namespace std;

int reverse ( int x )
{
    int num = 0;
    while ( x > 0 )
    {
        num = num * 10 + x % 10;
        x = x / 10;
    }
    return num;
}
int main()
{
    int t, n1, n2, count = 0;
    while (cin >> n1 )
    {
        if ( n1 == 0 )
        {
            break;
        }
        else if ( n1 > 1 )
        {
            count = 0;
            n2 = reverse ( n1 );
            while ( n1 != n2 )
            {
                n1 = n1 + n2;
                n2 = reverse ( n1 );
                count++;
                if ( count == 10 )
                {
                    cout << "NONE " << n1;
                    break;
                }
            }
            if ( n1 == n2 )
                printf ( "%d\n", n1 );
            else
                cout << endl;
        }
    }
    return 0;
}





