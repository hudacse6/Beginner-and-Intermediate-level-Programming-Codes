#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    int tcase;
    cin>>tcase;
    while ( tcase-- )
    {
        cin >> year;
        if ( ( ( year % 4 == 0 ) || ( year % 400 == 0 ) ) && year % 100 != 0 )
        {
            cout << "Leap year"<<endl;
        }
        else
            cout << "Not leap year";
    }
    return  0;
}
