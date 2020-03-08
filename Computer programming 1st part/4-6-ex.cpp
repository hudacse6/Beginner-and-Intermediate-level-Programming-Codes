#include<bits/stdc++.h>
using namespace std;

void recursive ( int count )
{
    if ( count > 5 )
        return ;
    printf ( "i am a slow learner but learnt \n" );
    recursive ( count + 1 );
    return ;
}


int main()
{
    recursive ( 1 );
    return 0;
}
