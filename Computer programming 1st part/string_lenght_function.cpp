#include<bits/stdc++.h>
using namespace std;

int fn_str_lenght( char str[])
{
      int i ;
      for(; str[i] !='\0' ; )
        i++;
      return i;
}

int main()
{
    //freopen("str_length.txt","r",stdin);
    char s[101];
    int lenth;
    while(gets(s))
    {
       lenth=fn_str_lenght(s);
       cout<<lenth<<endl;
    }

    return 0;
}
