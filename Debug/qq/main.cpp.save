//Throwing cards away
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    queue<int>myq;
    int n;
    while ( tcase-- )
    {
        cin >> n;
        int temp;
        for ( int i = 1 ; i <= n ; i++ )
        {
            myq.push ( i );
        }
        cout << "Discarded cards:";
        int b=0;
        while (b!=1)
        {
            cout<< myq.front() ;
            myq.pop();
            temp = myq.front();
            myq.push ( temp );
            myq.pop() ;
            if(myq.size()==1)
            {
                b=1;
            }

        }
        cout<<endl;
        cout << "Remaining Card : "<<myq.front() << endl;
    }
}
