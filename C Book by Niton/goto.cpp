#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    for ( int i = 0; i <= 10; i++ )
    {
        sum = sum + i;
        if ( i == 5 )
        {
            goto addition;
        }
        printf ( "hello %d \n",i+1 )  ;
    }
    printf ( "hello 2\n" );

    printf ( "The sum is : %d\n", sum );

    addition:
    printf ( "this is the goto statement\n" );
    return 0;
}
