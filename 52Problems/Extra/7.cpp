/// http://bit.ly/1-52-problem-7

#include<stdio.h>
#include<string.h>
int main ()
{
    int n,i,tcase;
    char ch[1001];
    scanf("%d",&tcase);
    gets(ch);
    while(tcase--)
    {
        int cn=1;
        int len;
        len=strlen(gets(ch));
        for(i=0; i<len; i++)
        {
            if(ch[i] == ' ')
                cn++;

        }
        printf("%d\n",cn);
    }

    return 0;
}
