#include<bits/stdc++.h>
using namespace std;
#define n 9000
int main()
{
     freopen ( "in_sort.txt", "r", stdin );    /// numaric values
    //freopen ( "in_sort.txt", "r", stdin );    /// numaric values
    int s[9000] ;
    int i, j ;
    int cont = 0;
    for ( i = 0 ; i < n ; i++ )
    {
        cin >> s[i];
    }
    for ( i = 1 ; i < n ; i++ )
    {
        j = i;
        while ( j > 0 && ( s[j] < s[j - 1] ) )
        {
            swap ( s[j], s[j - 1] );
            j = j - 1;
            cont++;
        }
    }
    cout << "Total cont: " << cont << endl;
    for ( i = 0 ; i < n ; i++ )
    {
        cout << s[i] << " " ;
    }
    return 0;
}
