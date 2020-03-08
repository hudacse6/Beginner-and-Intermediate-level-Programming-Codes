//#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
       double res,in_val;
       cin>>in_val;
       res=sqrt(in_val);
       if(ceil(res)==floor(res))
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
    }
    return 0 ;
}
