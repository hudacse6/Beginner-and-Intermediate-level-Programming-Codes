#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={2,4,4,9,7,5,6,1} ;
    stable_sort(ar,ar+7);
    //for( auto &i: ar)
   for(int i = 0 ; i<7; i++)
    {
        cout<<ar[i]<<endl;
    }
}
