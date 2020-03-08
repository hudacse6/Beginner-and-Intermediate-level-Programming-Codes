#include<bits/stdc++.h>
using namespace std;


int string_length(char str[])
{
    int i=0 ;
   while(str[i]!='\0')
        i++;

    return i;
}


int main()
{
    char country[100];
    int i;
    while (NULL !=gets(country))
    {
        i=string_length(country);
        printf("length is:%d\n",i);
    }


    return 0;
}


