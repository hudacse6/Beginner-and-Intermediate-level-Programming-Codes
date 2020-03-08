#include<stdio.h>
int main()
{
    int a=0,b=1,r,i;
    printf("%d %d",a,b);
    for(i=1;i<=9;i++)
    {
        r=a+b;
        printf(" %d",r);
        a=b;
        b=r;
    }
    return 0;
}
