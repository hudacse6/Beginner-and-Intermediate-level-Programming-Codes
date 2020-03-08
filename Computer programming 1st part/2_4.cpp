#include<bits/stdc++.h>
using namespace std;
int main()
{
        double a,b;
        cin>>a>>b;
        int value;
        value=a+b;

        char sign;
        sign='+';
        cout<<a<<sign<<b<<"="<<value;
        cout<<"\n";

        value=a-b;
        sign='-';
        cout<<a<<sign<<b<<"="<<value;
        cout<<"\n";

        value=a*b;
        sign='*';
        cout<<a<<sign<<b<<"="<<value;
        cout<<"\n";

        value=a/b;
        sign='/';
        cout<<a<<sign<<b<<"="<<value;
         cout<<"\n";
        return 0;

}


