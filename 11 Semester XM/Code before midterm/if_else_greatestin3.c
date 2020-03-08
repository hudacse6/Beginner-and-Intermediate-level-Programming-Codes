//C Program to find greatest in 3 numbers
# include<stdio.h>
int main() {
int a, b, c;
printf("\nEnter value of a, b & c : ");
scanf("%d %d %d", &a, &b, &c);
if ((a > b) && (a > c))
printf("\n %d is greatest",a);
if ((b > c) && (b > a))
printf("\n %d is greatest",b);
if ((c > a) && (c > b))
printf("\n %d is greatest",c);
return(0);
}
