#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000] ;
    int len;
    gets ( str );
    len = strlen ( str ) ;
    int is_word_started=0 ;
    for( int i= 0 ; i< len ; i++ )
    {
       if( is_word_started=0  )
       {
           is_word_started=1;
           {
               if( str[i]>='A' && str[i]<='Z')
                {
                   str[i]=str[i];
                }
               else
                {
                    str[i]='A'+(str[i]-'a');
                    cout<<str;
                    cout<<i;
                }
           }

       }
       cout<<str<<"\n";
    }
    return 0;
}

