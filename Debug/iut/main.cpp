#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char ch[100001];
    int len;

    while(t--)
    {

        int sum=0;
        scanf("%s",&ch);
        len=strlen(ch);
       for(int i=0 ; i< len ; i++)
       {
           sum+=ch[i];
          //cout<<sum;
       }
       cout<<sum;

    }
    return 0;
}


