#include<bits/stdc++.h>
using namespace std;

int prime ( int n )
{
    if ( n < 2 ) return  0;
    if ( n == 2 ) return  1;
    if ( n %2==0 ) return  0;
    for ( int i = 3 ; i <= sqrt(n) ; i+=2 )
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
    int a,tcase;
    cin>>tcase;
    while ( tcase-- )
    {
        cin >> a;
        if ( 1 == prime ( a ) )
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
}
