#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max,a,b,c;
    cin>>a>>b>>c;
    if(a>b and a>c)
    {
        max=a;
    }
    else if(b>a and b>c)
    {
        max=b;
    }
    else if(c>a and c>b)
    {
        max=c;
    }

    cout<<max;
    return 0;
}
