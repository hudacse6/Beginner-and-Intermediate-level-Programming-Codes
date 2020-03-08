#include<bits/stdc++.h>
using namespace std;

const int size =10;
int p[size];

void seive ()
{
    int i, j,k;

    memset ( p, -1, size ) ;
    for ( i = 2 ; i <= size; i++ )
    {
        if ( p[i]  == -1 )
        {
            for ( j = 2 ; i * j <=size ; j++ )
            {
                p[i * j] = 0;

            }
        }
    }
    for (  k = 0 ; k <= size; k++ )
        {
            if ( p[ i*j ]= -1  )
            {
                cout << p << endl;
            }
        }
}

int main()
{
    seive();
    return 0;
}
