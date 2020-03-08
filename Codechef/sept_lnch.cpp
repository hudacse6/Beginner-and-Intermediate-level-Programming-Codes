#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n;
        scanf("%d",&n);
        int v[7];
        for(int j=0; j<7; j++) v[j]=0;
        for(int i=0; i<n; i++)
        {
            char s[12];
            cin>>s;
            if(strlen(s)==8)
                v[0]=1;
            else if(strlen(s)==6)
            {
                if(s[0]=='s')
                    v[1]=1;
                else
                    v[3]=1;
            }
            else if(strlen(s)==4)
            {
                if(s[0]=='e')
                    v[2]=1;
                else
                    v[4]=1;
            }
            else if(strlen(s)==11)
            {
                if(s[0]=='e')
                    v[5]=1;
                else
                    v[6]=1;
            }
        }
        if(v[0]==1 && v[1]==1 && v[2]==1 && (v[3]||v[5])==1 && (v[4]||v[6])==1)
            printf("Yes\n");
        else
            printf("No\n");

        t--;
    }
    return 0;
}
