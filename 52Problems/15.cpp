#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;

    while(t)
    {
        char instr[1000];
        int len,count[26],repeat=0;

        gets(instr);
        len = strlen(instr);

        for(int k=0; k<26; k++)
        {
            count[k]=0;
        }


        for(int i=0; i<len; i++)
        {
            if(instr[i]>='a' && instr[i]<='z')
            {
                count[instr[i]-'a']++;
            }
        }

        for(int j=0; j<26; j++)
        {
            if(count[j]!=0)
                printf("%c = %d\n",instr[j],j);
        }
    }
    return 0;
}
