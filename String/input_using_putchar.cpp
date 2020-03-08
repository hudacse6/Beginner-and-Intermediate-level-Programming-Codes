#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[50];
    char ch;
    int i= 0;
    cout<<"types ur character :";
    while ( (ch=getchar())!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("%s",str);
    return 0;

}
