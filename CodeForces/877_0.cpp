#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[5001];
    cin>>str;


    int i;
    i=0;
    while(i!=1)
    {
        if(str[i]=='a')
        {
            i=1;
        }
        else
        {
             memmove(&str[i], &str[i + 1], strlen(str) - i);
        }
    }

    int j;
    j=1;
    while(j!=0)
    {
        if(str[j]=='b')
        {
            j=0;
        }
        else
        {
             memmove(&str[j], &str[j + 1], strlen(str) - j);
        }
    }

    int len2;
    len2 = strlen(str);

    cout<<len2;


    return 0;
}

