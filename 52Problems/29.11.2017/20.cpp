#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
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
            if( S[i]==' ')
            {
                count++;
            }

        }
        printf("Count = %d\n",count+1);
    }
    return 0;
}


