#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a= 10;
    int divisor = 2;
    int result = 0;
    while( a != 0 )
    {
        a = a-divisor ;  /// 8
        result = result +1 ;  /// 1
    }
    cout<<"The result is "<<result;
}
