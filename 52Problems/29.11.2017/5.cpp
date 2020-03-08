#include<iostream>
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    int i, n, j;
    while ( tcase-- )
    {
        cin >> n;
        for ( i = 1 ; i <= n ; i++ )
        {
            for ( j = 0 ; j < n ; j++ )
            {
                printf ( "*" );
            }
            cout << endl   ;
        }
    }
    return 0;
}

