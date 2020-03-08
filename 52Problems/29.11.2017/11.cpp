#include<iostream>
using namespace std;
int main()
{
    int tcase, no ;
    cin >> tcase;
    while ( tcase-- )
    {
        double fact = 1;
        cin >> no;
        for ( int i = 2 ; i <= no ; i++ )
        {
            fact = fact * i;

        }
        printf ( "%.lf\n", fact ) ;


    }
    return 0;
}
