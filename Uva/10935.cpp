//Throwing cards away
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>myq;
    int n;
    cin >> n;
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        int temp;
        for ( int i = 1 ; i <= n ; i++ )
        {
            myq.push ( i );
        }
        cout << "Discarded cards: ";
        cout << myq.front();
        int b = 0;
        while ( b != 1 )
        {

            myq.pop();
            temp = myq.front();
            myq.push ( temp );
            myq.pop() ;
            if ( myq.size() == 1 )
            {
                b = 1;
                break;
            }
            cout << ", " << myq.front() ;
        }
        printf ( "\n" );
        cout << "Remaining card: " << myq.front();
    }
    return 0;
}
