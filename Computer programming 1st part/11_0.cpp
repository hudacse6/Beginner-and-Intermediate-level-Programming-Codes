#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen ( "2d.txt", "r", stdin );
    int marks[4][10];
    for ( int i = 0 ; i < 4  ; i++ )
    {
        for ( int j = 0 ; j < 10  ; j++ )
        {
            scanf ( "%d", &marks[i][j] );
            printf ( "%d ", marks[i][j] );
        }
        cout << endl;
    }
    for ( int i = 0 ; i < 4  ; i++ )
    {
        marks[3][i] = marks[0][i] / 4.0 + marks[1][i] / 4.0 + marks[2][i] / 2.0;
        printf ( "Roll No: %d  Total Marks: %d\n", i + 1, marks[3][i] );

    }
    return 0;
}
