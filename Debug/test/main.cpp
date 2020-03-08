#include<bits/stdc++.h>
using namespace std;

int f_calls=0;
int fib(int n)
{
    f_calls=f_calls+1;

    if(n==1 || n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
   int n;
   char s[3];
   scanf("%d",&n);
   if(n==1) {
       strcpy(s,"st");
   }
    if(n==2) {
       strcpy(s,"nd");
   }
    if(n==3) {
       strcpy(s,"rd");
   }
   else{
       strcpy(s,"th");
   }

   printf("%d%s Febonnaci number is :%d\n",n,s,fib(n));
   printf("Number of function calls : %d\n",f_calls);
   return 0;
}
