#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while ( T-- )
    {
        double  res = 0, rem = 0;
        int count = 0, n = 0, temp = 0;
        cin >> n;
        temp = n;
        while ( temp != 0 )
        {
            temp = temp / 10;
            count++;
        }
        temp = n;
        while ( temp != 0 )
        {
            rem = temp % 10;
            res = res + pow ( rem, count );
            temp = temp / 10;
        }
        if ( n == res )
        {
            cout << n << " is an armstrong number!" << endl;
        }
        else
        {
            cout << n << " is not an armstrong number!" << endl;
        }
    }
    return 0;
}

