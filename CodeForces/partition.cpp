#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("f.txt","r",stdin);
    int n,a;
    cin>>n;
    int b=0,c=0;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<0)
        {
            c=c+a;
        }
        else
        {
            b=b+a;
        }
    }
    cout<<(b-c)<<endl;
    return 0;
}
