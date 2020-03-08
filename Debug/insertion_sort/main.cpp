#include<bits/stdc++.h>
using namespace std;
#define n 5
int main()
{
    //  freopen("in_sort.txt" ,"r",stdin);
    int s[] = {3, 2, 0, 1, 7};
    int i, j ;
    int cont = 0;
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
