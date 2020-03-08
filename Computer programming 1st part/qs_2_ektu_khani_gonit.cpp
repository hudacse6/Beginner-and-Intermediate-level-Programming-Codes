#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a1,a2,b1,b2,c1,c2;
	printf(" a1:");
	cin>>a1;
	printf(" a2:");
	cin>>a2;
	printf(" b1:");
	cin>>b1;
	printf(" b2:");
	cin>>b2;
	printf(" c1:");
	cin>>c1;
	printf(" c2:");
	cin>>c2;
	cout<<"------------------\n";
	double c=(a1*b2-a2*b1);
    double x=(b2*c1-b1*c2)/c;
    double y=(a1*c2-a2*c1)/c;
    cout<<"  X:"<<x;
    cout<<"\t";
    cout<<"  Y:"<<y;

return 0;
}

