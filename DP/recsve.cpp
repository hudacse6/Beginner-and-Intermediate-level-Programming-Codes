#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n;
   long long int fact;

   scanf("%d",&t);

   for(int i=0; i<t; i++)
   {
       scanf("%d",&n);
       fact=1;
       for(int j=2; j<=n; j++)
       {
           fact= fact*j;
       }
       printf("\n%lld",fact);
   }
   return 0;
}





/*#include<bits/stdc++.h>
using namespace std;

int add_all(int n)
{
    if(n<=1)
        return n;
    else
        return(n*add_all(n-1));
}

int main()
{
   int a;
   a=add_all(20);
   cout<<a;
   return 0;
}*/
