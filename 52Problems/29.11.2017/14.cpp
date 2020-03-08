#include<iostream>
#include<string.h>
char st[1001];
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        char word, w2;
        int  cont = 0, i;
        scanf ( " %[^\n]", st );
        int len = strlen ( st );
        cin >> word;

        if ( ( word >= 'a' ) && ( word <= 'z' ) )
            w2 = word - 32;
        else
            w2 = word + 32;

        for ( i = 0 ; i < len ; i++ )
        {
            if ( st[i] == word || st[i] == w2 )
                cont++;
        }

        if ( cont == 0 )
        {
            printf ( "'%c' is not present\n", word );
        }
        else
        {
            printf ( "Occurrence of '%c' in '%s' = %d\n", word, st, cont );
        }
    }
    return 0;
}

/*
#include<iostream>
#include<string.h>
char st[10000];
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        char word, w2, w3;
        int  cont = 0, i;
        scanf ( " %[^\n]", st );
        int len = strlen ( st );
        cin >> word;
        for ( i = 0 ; i < len ; i++ )
        {
            if ( st[i] > 'a' && st[i] < 'z' )
                w2 = word - 32;
            else
                w3 = word + 32;
            if ( ( st[i] > 'a' && st[i] < 'z' ) || ( st[i] > 'A' && st[i] < 'Z' ) )
            {
                if ( st[i] == word || st[i] == w2 || st[i] == w3 )
                    cont++;
            }
        }
        if ( cont == 0 )
        {
            printf ( "'%c' is not present\n", word );
        }
        else
        {
            printf ( "Occurrence of '%c' in '%s' = %d\n", word, st, cont );
        }
    }
    return 0;
}
 */
