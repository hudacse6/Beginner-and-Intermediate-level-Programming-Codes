#include<bits/stdc++.h>
using namespace std;
//#include<stdio.h>
int main()
{
    int count = 0;
    int i;
    for ( i = 1000 ; i > 0 ; i-- )
    {
        printf ( "%d ", i );
        count++;
        if ( count == 5 )
        {
            printf ( "\n" );
            count = 0;
        }
    }
    return 0;
}
