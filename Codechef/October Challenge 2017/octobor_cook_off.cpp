#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tcase=10000;
   // cin >> tcase;
    while ( tcase-- )
    {
        long long int pair_of = 0,Value_y=10000000000;
        int Value_B;
        int B=700;
        //cin >> Value_y;
        if ( Value_y > B )  Value_B = B;
        else Value_B = Value_y;
        int i = 1;
        for ( ; i < Value_B ; i++ )
        {
            pair_of += sqrt ( Value_y - i );
        }
        if (Value_B && Value_y > B )
        {
            pair_of += sqrt ( Value_y - B );
        }
        cout << pair_of << endl;
    }
    return 0;
}

