#include<bits/stdc++.h>
using namespace std;
int main()
{
    for ( int a = 1 ; a <= 3 ; a++ )
    {
        for ( int b = 1 ; b <= 3 ; b++ )
        {
            if ( b != a )
                for ( int c = 1 ; c <= 3 ; c++ )
                    if ( c != b && c != a )
                    {
                        printf ( "%d %d %d \n", a, b, c );
                    }
        }
    }
    return 0;
}
