#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int > myq;
    int n;
    cin >> n;
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        for ( int i = 1 ; i <= n ; i++ )
        {
            myq.push ( i );
        }

        cout << "Cards: ";
        int temp;

        if ( !myq.empty() )
        {
            cout << myq.front();
            myq.pop();
            temp = myq.front();
            myq.push ( temp );
            myq.pop();
            cout << " " << myq.front()<<endl;
        }
    }
    return 0;
}
