#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=50,b=102,x,gcd;

    if(a>b)
		x=a;
	else
		x=b;

	for(;;x--)
	{
		if(a%x==0 && b%x==0)
			{
				gcd=x;

			}
	}
	cout<<"\t="<<gcd;
	return 0;
}
