#include<stdio.h>
int main()
{
    int i, a = 0, b = 1, r;
    printf ( "%d %d ", a, b );
    for ( i = 1; i <= 10; i++ )
    {
        r = a + b;
        printf ( "%d ", r );
        a = b;
        b = r;
    }
    return 0;
}
