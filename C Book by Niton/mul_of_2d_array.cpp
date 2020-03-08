#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, column, k;
    cin >> row;     // row
    cin >> column;     // column
    int a[row][column];  //2*3
    int b[row][column];  //3*2
    int c[row][column];  //3*2
    for ( int i = 0 ; i < row ; i++ )
    {
        for ( int j = 0 ; j < column ; j++ )
        {
            scanf ( "%d", &a[i][j] );
        }
    }

    for ( int i = 0 ; i < column ; i++ )
    {
        for ( int j = 0 ; j < row ; j++ )
        {
            scanf ( "%d", &b[i][j] );
        }
    }
    cout << "output is :\n";

    for ( int i = 0 ; i < row ; i++ )    //row
    {
        for ( int j = 0 ; j < row ; j++ )   // row
        {
            int sum = 0;
            for ( int k = 0 ; k < column ; k++ )   // column
            {
                sum = sum + ( a[i][k] * b[k][j] ) ;
            }
            c[i][j] = sum;
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
