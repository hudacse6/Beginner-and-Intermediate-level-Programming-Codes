#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//#include<math.h>
using namespace std;
int main()
{
    int i, Tcase, a = 1, armstrong;
    cin >> Tcase;
    while ( Tcase-- )
    {
        int n, sum = 0;
        cin >> n;

        for ( i = 0 ; i < n ; i++ )
        {
            armstrong = armstrong + pow ( i, n ) ;
            if ( armstrong == sum )
            {
                cout << armstrong << "is an armstrong number !" << endl;
            }
            else
            {
                cout << armstrong << "is not an armstrong number !" << endl;
            }
        }
    }
    return 0;
}

