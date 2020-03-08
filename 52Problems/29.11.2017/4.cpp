#include<iostream>
using namespace std;
int main()
{
    int tcase;
    cin>>tcase;
    int i,n,j;
    for( i= 1 ; i<=tcase ; i++)
    {
         cin>>n;
         printf("Case %d: ",i);
         for(j=1 ; j<=n ; j++)
         {
             if( n%j==0)
                printf("%d ",j) ;
         }
         cout<<endl;
    }
    return 0;
}
