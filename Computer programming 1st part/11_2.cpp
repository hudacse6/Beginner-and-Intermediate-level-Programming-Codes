#include<bits/stdc++.h>
using namespace std;
int main()
{
     freopen ( "name_d.txt", "r", stdin );
    char name[7][101] = {"Bangladesh",
                         "India",
                         "Pakistan",
                         "Sri Lanka",
                         "Nepal",
                         "Bhutan",
                         "Maldives"
                        };

    for ( int i = 0 ; i < 7  ; i++ )
    {
        int len=strlen(name[i]) ;
        for(int j = 0; j<len ; j++)
        {
            printf ("(%d , %d) = %c, \t", i ,j, name[i][j] );
        }
         cout<<endl<<endl;
    }
    return 0;
}


