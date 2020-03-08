#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1001];
    char str2[1001];
    int len=strlen(gets(str));
    int first_word=1;
    int last_word=0;

    for(int i=0 ; i < len ; i++)
    {
        if(str[i] != '\0' )
        {
            str2[i]=str2[i]-32;
        }
        else
        {
            str2[i]=str[i];
        }
        cout<<str2;
    }


}
