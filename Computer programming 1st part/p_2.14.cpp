#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nm1,nm2,value;
	char sign;
	cin>>nm1;
	cin>>nm2;
	value=nm1+nm2;
	sign='+';
	printf("%d %c %d = %d \n",nm1,sign,nm2,value);

	cin>>nm1;
	cin>>nm2;
	value=nm1-nm2;
	sign='-';
	printf("%d %c %d = %d \n",nm1,sign,nm2,value);

	cin>>nm1;
	cin>>nm2;
	value=nm1*nm2;
	sign='*';
	printf("%d %c %d = %d \n",nm1,sign,nm2,value);

	cin>>nm1;
	cin>>nm2;
	value=nm1/nm2;
	sign='/';
	printf("%d %c %d = %d ",nm1,sign,nm2,value);
	return 0;
}
