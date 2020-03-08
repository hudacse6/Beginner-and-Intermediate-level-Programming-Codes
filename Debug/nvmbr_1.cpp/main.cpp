#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[10001] ;
    int tcase,len;
    cin>>tcase;
    gets(st);
    while(tcase--)
    {
        int cnt,i;
        len=strlen(gets(st));
        for( i=0 ,i=len-1; i<len ; i++,i--)
        {
            if(st[i]=='A')
            {
                cnt++;
            }
        }
        cout<<"total"<<cnt;

    }


    return 0;
}

