#include<bits/stdc++.h>
using namespace std;
int main()
{

	/* int marks,i,count;
	int math_marks[7]={100,88,100,87,99,54,88,};

	for(int marks=54 ; marks<=100 ; marks++)
	{
		count=0;
		for(int i = 0 ; i <7 ; i++)
		{
			if(math_marks[i]==marks)
			{
				count++;

			}

		}
		printf("Marks: %d  Count: %d\n", marks,count);
	}

	return 0; */

	int total_marks[7]={100,88,100,87,99,54,88};
    int marks_count[101];

    for(int i=0 ; i<101 ; i++)
	{
		marks_count[i]=0;
	}

	for(int i=0 ; i<7 ; i++)
	{
		marks_count[total_marks[i]]++;
	}

	for(int i= 54 ; i<=100 ; i++)
	{
		printf("Marks:%d Count:%d\n",i,marks_count[i]);
	}
	return 0;
}
