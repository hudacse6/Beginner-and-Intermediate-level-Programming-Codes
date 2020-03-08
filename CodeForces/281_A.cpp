#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1001];
    int i;
    gets ( str );
    if ( str[0] >= 'A' && str[0] <= 'Z' )
    {
        cout << endl;
    }
    else
    {
        str[0] = 'A' + str[0] - 'a' ;
    }
    cout << str;
    return 0;
}
