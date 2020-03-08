
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6,k=2,item=3; // k=position , (item) to be inserted, n-elements
    int LA[n]={1,2,6,5,4,1};
    item= LA[k];
    while( j>=k ) // 6 >= 2
    {
        LA[j+1]=LA[j];
        j=j-1;
    }

    n=n+1;

    for(int i= 0 ; i< n ; i++)
    {

         cout<<LA[i] ;
    }
    return 0;
}
