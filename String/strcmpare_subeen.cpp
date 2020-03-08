#include<bits/stdc++.h>
using namespace std;

int string_compare ( char a[], char b[] )
{
    int i, j;
    for ( i = 0; a[i] != '\0' && b[i] != '\0'; i++ )
    {
        if ( a[i] < b[i] )
        {
            return -1;
        }
        if ( a[i] > b[i] )
        {
            return 1;
        }
    }
    if ( strlen( a ) == strlen ( b ) )
    {
        return 0;
    }
    if ( strlen ( a ) < strlen ( b ) )
    {
        return -1;
    }
    if ( strlen ( a ) > strlen ( b ) )
    {
        return 1;
    }
}

int main()
{
    char str1[100], str2[100];
    int i;
    int tcase;
    cin>>tcase;
    gets(str1);
    while(tcase--)
    {
        gets ( str1 );
        gets ( str2 );
        i = string_compare ( str1, str2 );
        cout << i <<"\n";
    }

    return 0;
}
