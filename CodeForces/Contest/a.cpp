#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    int a[100001], b[100001], input;
    cin >> input;
    int i;
    for ( int i = 1 ; i <= input ; i++ )
    {
        cin >> a[i];
    }
    for ( int i = 1 ; i <= input ; i++ )
    {
        cin >> b[i];
    }

    if ( a[i] > ( b[i] + ( b[i] + 1 ) ) )
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
