#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[1001] = {"civicc"};
    int i, j;
    for ( i = 0, j = strlen ( str1 ) - 1; i < strlen ( str1 ); i ++, j-- )
    {
        if ( str1[i] != str1[j] )
        {
            cout << "Not palindrome " << "\n";
           // break;
        }
    }
    if ( i == strlen ( str1 ) )
        cout <<"palindrome" << "\n";
    return 0;
}
