#include<iostream>
using namespace std;
int main()
{
    int tcase, no, zeros = 0;
    cin >> tcase;
    while ( tcase-- )
    {
        int cont = 0;
        cin >> no;
        for ( int i = 5 ; i <= no ; i *= 5 )
        {
            zeros = no / i;
            cont+=zeros;
        }
        cout << cont << endl;
    }
    return 0;
}
