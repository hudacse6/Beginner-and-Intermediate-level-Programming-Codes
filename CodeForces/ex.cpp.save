#include<bits/stdc++.h>
using namespace std;

int main()
{
    char Tcase[100],a[100];
    int t = 1;
    while ( t )
    {
        int len,cont=0;
        gets ( Tcase );
        len = strlen ( Tcase );
        for ( int i = 0 ; i < len; i++ )
        {
                 a[i]=Tcase[i];
        }
        for ( int i = 0 ; i < len; i++ )
        {
            cont++;
            for ( int j = 0 ; j < len ; j++ )
            {
                if ( i != j )
                {
                    if ( Tcase[i] == a[j] )
                    {
                        a[j] = a[j+1];
                        cout<<a[j]<<" ";
                    }
                }
            }
        }
        if ( cont % 2 == 0 )
            cout << cont<< "A Women! Chat with her" << "\n";
        else
            cout << cont<< "Male! Ignore him" ;
    }
    return 0;
}




