#include<bits/stdc++.h>
using namespace std;

///function overloading means the function name are same but d return data type,parameter are different
int area ( int bs, int ht )  //here function name area , data type int
{
    return ( ( bs * ht ) / 2 );
}
float area ( float bs, float ht )//here function name area , data type float
{
    return ( ( bs * ht ) / 2 );
}

double area ( double bs, double ht )//here function name area , data type double
{
    return ( ( bs * ht ) / 2 );
}

int main()
{
    double bs, ht;
    cout << "Enter base and height of triangle:";
    cin >> bs >> ht;
    cout<<"Area of triangle is(Using integer data type)="<<(int) area ( bs, ht )<<endl ;
    cout<<"Area of triangle is(Using float data type)="<< ( float ) area ( bs, ht ) <<endl ;
    cout<<"Area of triangle is(Using double data type)="<<( double ) area ( bs, ht )<<endl ;
}
