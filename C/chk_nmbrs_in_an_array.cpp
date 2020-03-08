#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[16]={100,29,54,78,59,45,45,45,90,90,99,78,78,46,87,87};
    int count=0;
    for(int marks=29 ; marks<=100 ; marks++)
	{
		for(int i=0 ; i<16 ;i++)
		{
			if(array[i]==marks)
			count++;
		}
		printf("Marks:%d Count:%d\n",marks,count);
	}

	return 0;
}
