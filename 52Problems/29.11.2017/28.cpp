#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;
int main()
{
    int T, ar[101], n=21;
    cin >> T;
    while ( T-- )
    {
        int count = 0;
        int  x=1;
        cin >> n;
        for ( int i = 0 ; i <= n ; i++ )
        {
            cin >> ar[i];
        }
        for ( int j = 0 ; j <=n ; j++ )
        {
            if ( ar[j] < ar[j + 1] )
            {
                count++;
            }
            else
            {
                count=0;
                cout << "NO" << endl;
                count = x;
                break;
            }
        }
        if ( count != x )
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}


