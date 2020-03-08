#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,len,t=1;
    char instr[100];
    char a[100];

    while(t)
    {
        len = strlen(gets(instr));
        a[0]=instr[0];

        for(i=1; i<len; i++)
        {
            for(j=0; j<strlen(a); j++)
            {
                if(a[j]!= instr[i])
                    a[i]=instr[i];
            }
        }

        if(strlen(a)%2==0)
            printf("Chat with her!\n");
        else
            printf("Ignore him!\n");
    }



    return 0;
}
