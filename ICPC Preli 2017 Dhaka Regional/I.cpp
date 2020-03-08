#include<bits/stdc++.h>
using namespace std;

int f(int n) {
    int len,j,count=0,k,y,z,x2,num,m;
    int c[]={n};
    while (n >= 10) {
        j=0;
        while(c[j])
        {
            count++;
            j++;
        }
        m=0;
        for(k=count-1; k>=0; k--)
        {
            y = pow(10, k);
            z = n/y;
            x2 = n / (y * 10);
            num=z - x2*10;
            m=m+num;
        }
        f(m);
    }
    return n;
}

int main()
{
    int a=0,b=0,t,i,n;

    char s1[51];
    char s[51];

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        a=atoi(gets(s));
        b=atoi(gets(s1));

        n=pow(a,b);

        printf("%d\n",f(n));
    }

    return 0;
}


