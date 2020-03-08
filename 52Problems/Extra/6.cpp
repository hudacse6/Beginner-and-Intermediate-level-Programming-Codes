#include<stdio.h>
#include<string.h>

int main()
{
    int Tcase, i, n,j;
    scanf ( "%d", &Tcase );
    for ( i = 1 ; i <= Tcase ; i++ )
    {
        scanf ( "%d", &n );
        printf("Sum = %d\n",n/10000+n%10 );
    }
    return 0;
}


