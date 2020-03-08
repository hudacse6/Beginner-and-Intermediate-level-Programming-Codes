#include<bits/stdc++.h>
using namespace std;

int prime ( int n )
{
    if ( n < 2 ) return  0;
    if ( n == 2 ) return  1;
    for ( int i = 3 ; i <= sqrt ( n ) ; i += 2 )
    {
        if ( n % i == 0 )
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    //freopen("prime.txt", "r" , stdin);
    int a;
    while ( 1 )
    {
        cin >> a;
        if ( 1 == prime ( a ) )
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
}
