#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, T, rem, temp = 0;
    cin >> T;
    while ( T-- )
    {
        int count = 0 ;
        cin >> n;
        temp = n;
        while ( temp != 0 )
        {
            temp = temp / 10;
            count++;
        }
        cout <<"Total digits No."<< count << endl;
    }
    return 0;
}

