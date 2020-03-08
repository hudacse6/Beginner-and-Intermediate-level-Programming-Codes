#include<stdio.h>
int main()
{
    int n,r,i,fact,number,sum=0;

    printf("Enter a number to check whether it is strong or not \n");
    scanf("%d",&number);
n=number;
    while(number!=0)
    {
        fact=1;
        r=number%10;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        number=number/10;
    }
    if(n==sum)printf("Strong Number");
    else printf("Not strong Number");
        return 0;
}
