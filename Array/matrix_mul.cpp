#include<bits/stdc++.h>
using namespace std;
#define R 2
#define C 2

int main()
{
    int a[2][2] = {5, 4, 4, 4};
    int b[2][2] = {6, 7, 4, 8};
    int c[2][2];
    cout << "Matrix A:" << endl;
    for ( int row = 0 ; row < R ; row++ )
    {
        for ( int column = 0 ; column < C ; column++ )
        {
            printf ( "%d ", a[row][column] );
        }
        cout << endl;
    }

    cout << "Matrix B:" << endl;
    for ( int row = 0 ; row < R ; row++ )
    {
        for ( int column = 0 ; column < C ; column++ )
        {
            printf ( "%d ", b[row][column] );
        }
        cout << endl ;
    }

    cout << "Matrix Multiplication of A x B :" << endl;
    for ( int row = 0 ; row < R ; row++ )
    {
        for ( int column = 0 ; column < C ; column++ )
        {
            int sum = 0 ;
            for ( int k = 0 ; k < R ; k++ )
                sum = sum + a[row][k] * b[k][column];
            c[row][column] = sum;
            printf ( "%d ", c[row][column] );
        }
        cout << endl ;
    }
    return 0;
}
