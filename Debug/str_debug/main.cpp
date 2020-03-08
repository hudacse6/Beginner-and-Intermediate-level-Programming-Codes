#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[10]="Love";
    char str2[10]="Rose";
    char str3[9];
    int len1=strlen(str1);
    int len2=strlen(str2);
    int i,j;
    for (int i=0 , j=0 ; i <len1 ; i++, j++)
    {
        str3[i]=str1[j];
    }

    for (int j=0 ; j <len2 ; j++,i++)
    {
        str3[i]=str2[j];
    }
     str3[i]='\0';
     cout<<str3;
    return 0;
}
