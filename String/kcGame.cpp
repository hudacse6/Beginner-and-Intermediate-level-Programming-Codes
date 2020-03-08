#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,c,w;
    char a[1000];
    while(gets(a))
    {
        c=0;
        w=1;
        for(i=0;a[i];i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(w)
                c++;
                w=0;
            }
            else
            w=1;
        }
        printf("%d\n",c);
    }
    return 0;
}

/*int main()
{
    char s[1000];

    int i,len,word;

    while(gets(s))
    {
        len=strlen(s);
        word=1;

        for(i=0; i<len; i++)
        {
            if(s[i]!=' ' && s[i+1]==' ')
            {
                if(s[i]=='.')
                    word=word;
                else
                    word= word+1;
            }
        }
        printf("%d\n",word);
    }


    return 0;
}*/
