#include<bits/stdc++.h>
using namespace std;
int main()
{

    int s[1001], d[1001],n;
    cin>>n;
    for(int i= 0 ; i< n ;i++)
    {
        cin>>s[i]>>d[i];

    }
    int cnt=0;
    cnt=s[0];
    int temp ;
    for(int i= 1 ; i < n ;i++  )
    {
        if( cnt<s[i])
        {
            cnt=s[i] ;
        }
        else
        {   int t=0;
            while(t!=1)
            {
                s[i]=s[i]+d[i];
                if(s[i]>cnt)
                {
                    t=1;
                }
            }
            cnt=s[i];
        }
    }

    cout<<cnt;
    return 0;
}
