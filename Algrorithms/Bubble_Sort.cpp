#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define N 10
int main()
{
    int n[10] = {2, 13, 1, 7, 22, 34, 5, 22, 0, 5};
    int cont = 0 ;
    for ( int i = 0 ; i < N ; i++ )
    {
        for ( int j = i + 1 ; j < N ; j++ )
        {
            if ( n[i] > n[j] )
            {
                swap ( n[i], n[j] );
//                  temp = n[i];
//                  n[i] = n[j];
//                  n[j] = temp;
                cont++;
            }
        }
    }
    cout << "Total cont : " << cont << endl;
    for ( int i = 0; i < N; i++ )
    {
        cout << n[i] << " ";
    }
    return 0;
}
