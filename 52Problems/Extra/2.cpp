#include<stdio.h>
#include<string.h>

int main()
{
    int Tcase, i;
    char digit[101];
    int len;
    scanf ( "%d", &Tcase );

    for ( i = 0; i < Tcase ; i++ )
    {
        scanf ( "%s", &digit );
        len = strlen ( digit );
        if ( digit [len - 1] % 2 == 0 )
        {

            printf ( "even\n" );
        }
        else
        {
            printf ( "odd\n" );
        }
    }
    return 0;
}

