#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        printf("i=%d\n\t",i);
        for(j=1;j<=3;j++)
        {
            printf("j=%d ",j);
        }
        printf("\n");
    }

    return 0;
}
