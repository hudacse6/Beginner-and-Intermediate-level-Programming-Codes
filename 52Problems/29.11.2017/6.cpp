#include<bits/stdc++.h>
using namespace std;
#include<iostream>
int main()
{
    int tcase, n;
    cin >> tcase;
    while ( tcase-- )
    {
        cin >> n;
        printf ( "Sum = %d\n", n % 10 + n / 10000 ) ;
    }
    return 0;
}
