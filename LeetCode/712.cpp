#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        char str1[1001], str2[1001], str[1001];
        cin >> str1 >> str2;
        int l1, l2;
        l1 = strlen ( str1 );
        l2 = strlen ( str2 );
        for ( int i = 0; i < l2; i++ )
        {
            str[i] = str2[i];
        }
        for ( int i = 0; i < l1; i++ )
        {
            for ( int j = 0; j < l2; j++ )
            {
                if ( str1[i] == str2[j] )
                {
                    //int idxToDel = j;
                    memmove ( &str2[j], &str2[j + 1], strlen ( str2 ) - j );
                    //str2.erase(j,(l2-j)+1);
                    break;
                }
            }
        }
        for ( int i = 0; i < l2; i++ )
        {
            for ( int j = 0; j < l1; j++ )
            {
                if ( str[i] == str1[j] )
                {
                    //int idxToDel = j;
                    memmove ( &str1[j], &str1[j + 1], strlen ( str1 ) - j );
                    //str2.erase(j,(l2-j)+1);
                    break;
                }
            }
        }
        int cont = 0;
        for ( int i = 0; str2[i] != '\0'; i++ )
        {
            cont = cont + str2[i];
        }
        for ( int i = 0; str1[i] != '\0'; i++ )
        {
            cont = cont + str1[i];
        }
        cout << cont;
        //cout<<cont<<endl;
    }
    return 0;
}
