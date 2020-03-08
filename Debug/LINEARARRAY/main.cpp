#include<bits/stdc++.h>
using namespace std;
int main()
{
    int LA[]={1,2,6,5,4,1};
    int n=6,k=2,item=3;  // k=position , (item) to be inserted, n-elements
    int j=n;
    while( j>=k) // 6 >= 2
    {
        LA[j+1]=LA[j];

        j=j-1;
         cout<<LA[j] ;
    }
    LA[k]=item;
    n=n+1;
    return 0;
}
