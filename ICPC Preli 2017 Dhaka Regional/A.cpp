#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,y;
    scanf("%d %d %d",&p,&q,&y);
    p=p*5;
    q=q*2;
    int res=p+q;
    res=res*52;
    res=res*y;

    printf("%d\n",res);
    return 0;
}
