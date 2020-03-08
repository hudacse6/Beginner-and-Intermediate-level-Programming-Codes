#include<bits/stdc++.h>
using namespace std;


int string_length(char str[])
{
    int length=0,i;
    for(int i=0 ; str[i]!='\0'; i++)
    {
        length++;
    }
    return length;
}


int main()
{
    char country[100];
    int length;
    while ( scanf("%s",country))
    {
        length=string_length(country);
        printf("length :%d\n",length);
    }

    return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    k=scanf("%d",&m);

    cout<<k;
}
*/
