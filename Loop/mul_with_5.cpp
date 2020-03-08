#include<bits/stdc++.h>
using namespace std;
int main()
{
///Using while loop
/* int n=5;
   int i=1;
   while( i<=100 )
   {
  	 printf(" %d x %d = %d\n",n,i,n*i);
  	 i++;
   }
  */
///Using for loop

 /* int  n=5;
 for(int i=1 ; i<=10;)
 {
 	printf("%d x %d = %d\n",n,i,n*i);
 	i++;
 } */

 int m,n=5;
 m=0;
 for(int i=1 ; i<=10 ;i++)
 {
	m=m+n;
 	printf("%d + %d = %d\n",n,i,m);
 }
return 0;
}

