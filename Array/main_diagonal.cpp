#include<bits/stdc++.h>
using namespace std;
#define R 5
#define C 5

int main()
{
    // freopen( "m.txt", "r" ,stdin );
    int a[5][5] ;
    int c[5][5];
    cout << "Input the Matrix:" << endl;
    for ( int row = 0 ; row < R ; row++ )
    {
        for ( int column = 0 ; column < C ; column++ )
        {
            scanf ( "%d ", &a[row][column] );
        }
        cout << endl;
    }
    cout << "output Matrix :" << endl;
    for ( int row = 0 ; row < R ; row++ )
    {
        for ( int column = 0 ; column < C ; column++ )
        {
            printf ( "%d ", a[row][column] );
        }
        cout << endl ;
    }
    cout << "The Diagonal Matrix :" << endl;
    for ( int row = 0 ; row < R ; row++ )
    {
        for ( int column = 0 ; column < C ; column++ )
        {
            if ( row == column )
                printf ( "%4d ", a[row][column] );
        }
        cout << endl ;
    }
    return 0;
}

