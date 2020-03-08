#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[]="bangla";
    char str2[]="desh";
    char str3[12];
    int len1=6,len2=4;
    int i,j;
    for ( i=0, j=0 ; i<len1 ; i++, j++)
    {
        str3[j]=str1[i];
    }

    for ( i=0 ;  i<len2 ; i++,j++)
    {
        str3[j]=str2[i];
    }
    str3[j]='\0';
    printf("%s\n",str3);
    return 0;
}
