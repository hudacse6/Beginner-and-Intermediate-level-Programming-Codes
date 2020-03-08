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
      // res=ceil(in_val);
       res=floor(in_val);
       cout<<"Ceil() : "<<res <<endl;

    }
    return 0 ;
}
