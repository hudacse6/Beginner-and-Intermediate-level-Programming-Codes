// VU Grading System
#include<stdio.h>
int main()
{
float mark;
printf("Enter a Mark : ");
scanf("%f",&mark);
if(mark>=80 && mark<=100)
printf("A+ = 4.00");
else if(mark>=75 && mark<=79)
printf("A = 3.75");
else if(mark>=70 && mark<=74)
printf("A- = 3.50");
else if(mark>=65 && mark<=69)
printf("B+ = 3.25");
else if(mark>=60 && mark<=64)
printf("B = 3.00");
else if(mark>=55 && mark<=59)
printf("B- = 2.75");
else if(mark>=50 && mark<=54)
printf("C+ = 2.50");
else if(mark>=45 && mark<=49)
printf("C = 2.25");
else if(mark>=40 && mark<=44)
printf("D = 2.00");
else if(mark>=0 && mark<=39)
printf("F = 0.00");
else
printf("Invalid Input");
return 0;
}
