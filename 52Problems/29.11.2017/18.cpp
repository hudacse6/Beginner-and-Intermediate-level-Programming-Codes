#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int tcase;
    char S[1001];
    cin>>tcase;
    while(tcase--)
    {
        int i;
        scanf(" %[^\n]",S);
        int len=strlen(S);
        for( i = 0 ; i<len ; i++)
        {
            if( (S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u') || (S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U'))
            {
                printf("%c",S[i]);
            }
        }
        cout<<endl;
        for( i = 0 ; i<len ; i++)
        {
            if( (S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u' && S[i]!=' ' ) && (S[i]!='A' && S[i]!='E' && S[i]!='I' && S[i]!='O' && S[i]!='U' && S[i]!=' ') )
            {
                printf("%c",S[i]);
            }
        }
        cout<<endl;

    }
    return 0;
}


