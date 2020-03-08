#include<stdio.h>
int main ()
{
    int number,i,flag=1;
    printf("Enter a number to check whether it is prime or not\n");
    scanf("%d",&number);

    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            flag=0;
            break;
        }

    }

    if(flag==1) printf("Prime");
    else printf("Not Prime");


    return 0;
}
