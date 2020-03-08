#include<bits/stdc++.h>
using namespace std;
//#include<stdio.h>
//#include<string.h>

int main()
{
    int tcase, i;
    char n[101];
    scanf ( "%d", &tcase );
    for ( i = 1 ; i <= tcase ; i++ )
    {
        scanf ( "%s", &n );
        int len = strlen ( n );
        cout << "length " << len << endl;
        cout << "POSIOTION OF last digit of a string :" << len - 1 << endl;
        printf ( "ASCII Value of last digit:%d\n", n[len - 1] );
        if ( n[len - 1] % 2 == 0 )
        {
            cout << "Value of array n[] :" << n << endl;
            printf ( "even\n" ) ;
        }
        else
        {
            cout << "Value of array n[] :" << n << endl;
            printf ( "odd\n" ) ;
        }
        cout << "-------------------------" << endl;
    }
    return 0;
}

