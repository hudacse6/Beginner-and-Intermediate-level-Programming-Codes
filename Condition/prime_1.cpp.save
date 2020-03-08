#include<iostream>
using namespace std;
int main ()
{
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        int cont = 0;
        int a,b;
        cin>>a>>b;
        for ( int i = a; i < b; i++ )
        {
            bool prime = true;
            for ( int j = 2; j * j <= i; j++ )
            {
                if ( i % j == 0 )
                {
                    prime = false;
                    break;
                }
            }
            if ( prime )
                cont++;
        }
        cout << cont << "\n";
    }
    return 0;
}
