#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen ( "matrix_add.txt", "r", stdin );
    int matrix[5][5];
    for ( int i = 0 ; i < 5 ; i++ )
    {
        for ( int j = 0 ; j < 5 ; j++ )
        {
            scanf ( "%d ", &matrix[i][j] );
            printf ( "%d ", matrix[i][j] );
        }
        cout << endl;
    }
    /// This is for addition of rows
    int sum = 0 ;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        for ( int j = 0 ; j < 5 ; j++ )
        {
            sum = matrix[i][j] + sum;
        }
        printf ( "%d ", sum );
        sum = 0 ;
        cout << endl;
    }
     cout<<"---------------------"<<endl;
    /// This is for addition of columns
    int sum1 = 0 ;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        for ( int j = 0 ; j < 5 ; j++ )
        {
            sum1 = matrix[j][i] + sum1;
        }
        printf ( "%d ", sum1 );
        sum1 = 0 ;
        cout << endl;
    }
}
