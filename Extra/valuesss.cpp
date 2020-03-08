#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    int  b= a++*++a;
    cout<<"B "<<b<<endl;
    int c= b*a++;
    cout<<" "<<c<<endl;
    int d=a;
    cout<<" "<<d;

}
