#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int i = 0;
    for ( ; ; )
    {
        printf ( "%d + %d = %d\n", n, i, n + i );
        i = i + 5;
        if ( i > 50 )
        {
            break;
        }
    }
    return 0;
}

