#include<bits/stdc++.h>
using namespace std;

int  brute_force (char  text[], char pattern[] )
{

    int cont=0;
    int k1=strlen(text);
    int k2=strlen(pattern);
    for ( int i = 0; i < n; i++ )
    {
        for ( int  j = 0; j < m && i + j < n ; j++ )
        {
            if ( text[i + j] != pattern[j] )
                 break;
            if ( j == m )
               cont++;
        }

    }
     return cont;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[129]; //main text
        char s2[129];  // pattern which will be to search
        cin>>s1>>s2;
        cout<<brute_force(s1 ,s2)<<endl;
    }
    return 0;
}
