#include<bits/stdc++.h>
using namespace std;
int main()
{
    char mainstring[50],substring[50],*pos=0;

    cout<<"Enter the main String :";
    gets(mainstring);

    cout<<"Enter the sub String you want to find:";
    gets(substring);

    pos=strstr(mainstring,substring);

    if(pos)
        printf("%s %d",substring,pos);
    else
        printf("%s %d",substring);

    return 0;
}
