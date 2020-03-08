#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        cin >> a >> b;
        if ( a > b )
        {
            cout << "Invalid!" << "\n";
        }
        else
        {
            int i = 1;
            for ( i = 1; ; i++ )
            {
                if ( a * i > b )
                {
                    break;
                }
                else
                {
                    cout << a*i << endl;
                }
            }
        }
    }
    return 0;
}
