#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,x_plus_y,x_minus_y;
	cout<<"Enter x_plus_y: ";
	cin>>x_plus_y;
	cout<<"Enter x_minus_y:";
	cin>>x_minus_y;
	x=(x_plus_y+x_minus_y)/2;
	y=(x_plus_y-x_minus_y)/2;
	cout<<"X:"<<x;
	cout<<"\n";
	cout<<"Y:"<<y;


return 0;
}

