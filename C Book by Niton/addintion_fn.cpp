#include<bits/stdc++.h>
using namespace std;


int add_1st(int a1, int a2  )
{
    int sum1=a1+a2;
    cout<<sum1<<endl;
    return sum1;
}

int add_2nd(int a1, int a2  )
{
    int sum2=a1*a2;
    cout<<sum2<<endl;
    return sum2;
}

int add_3rd(int a1, int a2  )
{
    int sum3=a1+a2;
    cout<<sum3<<endl;
    return sum3;
}

int main()
{
    int a=5,b=6,c=10;
    int fn1= add_1st(a,b);
    int fn2= add_2nd(fn1,c);
    int fn3= add_3rd(fn2,fn1);


}
