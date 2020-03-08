#include<bits/stdc++.h>
using namespace std;

int a=10;
static int b=10;

void my_func()
{
    //int a=10;
    //static int b=10;
    a=a+1;
    b=b+1;
    printf("a=%d",a);
    printf("  b=%d \n",b);
}

int main()
{
   my_func();
   my_func();
   my_func();
   my_func();

   return 0;
}














/*
int x=1;
void my_func(int y)
{
    y=y*2;
    x=x+10;
    printf("my_func, x= %d , y= %d\n",x,y);
}

int main()
{
   int y=5;
    x=11;
   my_func(y);
   printf("main   , x= %d , y= %d\n",x,y);
   return 0;

}

*/
