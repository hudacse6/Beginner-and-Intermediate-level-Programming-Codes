#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        cin >> a >> b ;
        for ( int i = 0 ; i < ( 2 * a - 1 ) ; i += 2 ) // loop- 0 to 2
        {
            for ( int j = 0  ; j <= i ; j++ )
            {
                cout << b ;
            }
            cout << "\n" ;
        }
    }
    return 0;
}
