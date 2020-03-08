#include<stdio.h>
int main()
{
    int number1,number2,sum;
    printf("Please Enter two numbers : \n");
    scanf("%d %d",&number1,&number2);


    sum=number1+number2;

    printf("\t%d+%d = %d\a",number1,number2,sum);
    //printf("\nHello\r");
    return 0;
}
