#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[]="hadisur";
    char str2[]="rahman";
    char str3[13];
    int length1=strlen(str1);
    int length2=strlen(str2);
    int i,j;
    for (int i = 0 , j=0 ; i<length1  ; i++,j++)
    {
        str3[j]=str1[i];
    }
    for (int i = 6 , j=8 ; i<length2 ; i++,j++)
    {
        str3[j]=str2[i];
    }

    str3[j]= '\0' ;
    cout<<str3;
    return 0;


}
