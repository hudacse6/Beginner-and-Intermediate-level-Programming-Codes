//Example: Program to Check Alphabet
#include <stdio.h>
int main()
{
    float addmission,gpa;
    printf("Enter your mark : ");
    scanf("%f",&addmission);

    if(addmission>=25)
    {
        printf("You are permitted to admit into VU");
        printf("\nEnter 1st semester GPA : ");
        scanf("%f",&gpa);
        if(gpa<2.00)
            printf("\nYou have to stay down in 1st semester");
        else
            printf("\nYou are in 2nd semester");

    }

    return 0;
}
