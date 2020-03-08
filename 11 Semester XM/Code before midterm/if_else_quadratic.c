//C Program to Solve Second Order Quadratic Equation
# include<stdio.h>
# include<math.h>
int main() {
float a, b, c;
float value,desc, root1, root2;
printf("\nEnter the Values of a : ");
scanf("%f", &a);
printf("\nEnter the Values of b : ");
scanf("%f", &b);
printf("\nEnter the Values of c : ");
scanf("%f", &c);
value=b * b - 4 * a * c;
if(value>=0)
{
desc = sqrt(value);
root1 = (-b + desc) / (2.0 * a);
root2 = (-b - desc) / (2.0 * a);
printf("\nFirst Root : %f", root1);
printf("\nSecond Root : %f", root2);
}
else
printf("\nGenerated Complex Number");
return 0;
}
