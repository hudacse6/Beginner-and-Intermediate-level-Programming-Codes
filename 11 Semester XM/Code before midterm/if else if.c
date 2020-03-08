//Example: Program to Check Alphabet
#include <stdio.h>
int main()
{
    float mark;
    printf("Enter your mark : ");
    scanf("%f",&mark);

    if(mark>=80 && mark<=100)
        printf("High Level\nYou have gained %.2f mark",mark);
    else if(mark>=60 && mark<=79)
        printf("Mid Level\nYou have gained %.2f mark",mark);
    else if(mark>=40 && mark<=59)
        printf("Low Level\nYou have gained %.2f mark",mark);
    else
        printf("Invalid Input!");

    return 0;
}
