#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[1001] = {"cxivic"};
    int i, j;
    for ( i = 0, j = strlen ( str1 ) - 1; i < strlen ( str1 ); i ++, j-- )
    {
        if ( str1[i] != str1[j] )
        {
            cout << "Not palindrome " << "\n";
            break;
        }
    }
    if ( i == strlen ( str1 ) )
        cout << "palindrome" << "\n";
    return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    char str1[1001]= {"palindrome"};
//    char a[1001];
//    for ( int i = 0 ; i <= strlen ( str1 ); i ++ )
//    {
//        a[i] = str1[i];
//    }
//    strrev ( a );
//    if ( strcmp ( str1, a ) == 0 )
//        cout << "palindrome" << "\n";
//    else
//        cout << "Not palindrome " << "\n";
//    return 0;
//}
