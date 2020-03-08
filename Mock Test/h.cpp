#include<bits/stdc++.h>
using namespace std;

int h(int x, int y, int z)
    {
        //scanf("%d%d%lld",&a,&b,&c);
        int a,b;
        int k,k1=1,k2=2;
        for(int i=2 ; i<=a ; i++)
        {
            p1=pow(b,k1);
            p2=pow(b,k2);
            k=k1+k2;
            k1=k2;
            k2=k;
            p=((p1%c)*(p2%c))%c;
        }
        printf("Case %d: %d\n",j,p);
    }
int main()
{
    int a,b,n,t,p,p1,p2;
    long long int c;
    int h;
    h(3,2,1000);
    scanf("%d",&t);
    for(int j=1 ; j <=t ; j++)

    }
    return 0;

}

