#include<stdio.h>
#include<string.h>
int main ()
{
    int n1, n2, n3, i, tcase;
    scanf ( "%d", &tcase );
        for ( i = 1 ; i <= tcase ; i++ )
        {
            int temp;
            scanf ( "%d%d%d", &n1, &n2, &n3 );
            if ( n1 > n2 )
            {
                temp = n1;
                n1 = n2;
                n2 = temp;
            }
            if ( n1 > n3 )
            {
                temp = n1;
                n1 = n3;
                n3 = temp;
            }
            if ( n2 > n3 )
            {
                temp = n2;
                n2 = n3;
                n3 = temp;
            }
            printf ( "Case %d: %d %d %d\n", i, n1, n2, n3 );
        }
    return 0;
}
