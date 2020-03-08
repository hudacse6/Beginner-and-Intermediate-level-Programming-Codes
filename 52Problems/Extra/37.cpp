#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int tcase;
    cin>>tcase;
    while ( tcase-- )
    {
        cin >> n;
        int m, i = 0;
        while ( n != 0 )
        {
            i = n % 10;
            m = n / 10;
            n = m;
            cout << i;
        }
        cout<<"\n";
    }
    return 0;
}
