#include<bits/stdc++.h>
using namespace std;
int main()

{
    int ft_marks[10]={86,45,64,57,24,12,4,57,54,64},
		st_marks[10]={48,45,54,87,66,99,52,19,25,66},
		final_marks[10]={99,89,78,87,97,50,45,49,59,48};

		double total_marks [10];
		for(int i=0;i<10;i++)
		{
			total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
		}
		for(int i=1;i<=10;i++)
		{
			printf("Roll No:%d\t Total Marks:%0.0lf\n",i,total_marks[i-1]);
		}


		return 0;
}
