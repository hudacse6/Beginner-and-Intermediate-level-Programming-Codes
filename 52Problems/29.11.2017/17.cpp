#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{


    int tcase,i,j;
    char S[1001];
    cin>>tcase;
    while(tcase--)
    {
        int count = 0;
        scanf(" %[^\n]",S);
        int len=strlen(S);
        for( i = 0 ; i< len ; i++)
        {
            if( (S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u') || (S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U'))
            {
                count++;
            }

        }
        printf("Number of vowels = %d\n",count);
    }
    return 0;
}

