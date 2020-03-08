#include<bits/stdc++.h>
using namespace std;

int prime_number ( int n )
{

    if ( n == 0 || n == 1 ) return 0;
    if ( n == 2 ) return 1;

    for ( int i = 3 ; i < sqrt(n) ; i+=2 )
    {
        if ( n % i == 0 )  //14
        {
           return 0;
        }
    }
    return 1;
}

int main()
{
    int p,tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        cin >> p;
        if ( 1== prime_number(p))
        {
            cout << "Prime." << endl;
        }
        else cout<<"Not Prime"<<endl;

    }
    return 0;
}
