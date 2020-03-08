#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[50];
    int tcase, size_of_t_cases;
    cin >> tcase;
    while ( tcase-- )
    {
        int cont = 0 ;
        cin >> size_of_t_cases;
        for ( int s = 0 ; s < size_of_t_cases ; s++ )
        {
            cin >> n[s];
        }
        for ( int i = 0 ; i < size_of_t_cases ; i++ )
        {
            for ( int j = i + 1 ; j < size_of_t_cases ; j++ )
            {
                if ( n[i] > n[j] )
                {
                    swap ( n[i], n[j] );
                    {
                        cont++;
                    }
                }
            }
        }
        cout << "Optimal train swapping takes " << cont << " swaps." << endl;
    }
    return 0;
}

