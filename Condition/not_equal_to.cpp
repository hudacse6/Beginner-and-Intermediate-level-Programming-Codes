#include<bits/stdc++.h>
using namespace std;
int main()
{
	int gcd=0;
	int x=150,y=35;
	while(y!=0)
	{
		gcd=x%y;
		x=y;
		y=gcd;
	}
	cout<<"GCD:"<<x;
}
