#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ara[]={1,2,3,10,24,5,4,8,54,78,54,98,4,49,49,49,84,98,49};
	int temp,i,j;
	for( i=0, j=18; i<19,j>=i ; i++,j-- )
	{
		temp=ara[j];
		ara[j]=ara[i];
		ara[i]=temp;
	}

	for( i=0 ; i<19 ; i++ )
	{
		printf("%d\n",ara[i]);
	}
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

void reverse_array( int arr[], int start, int end )
{
	int temp;
	while( start < end )
	{
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
	}
}

void printArray( int arr[],int size )
{
    for(int i=0 ; i<size ; i++)
	{
		printf("%d\n",arr[i]);
	}
}

int main()
{
	int arr[5]={1,2,3,4,5};
	printArray(arr,5);
	printf("Reversed Array is:\n");
	reverse_array(arr , 0 ,4);
	printArray(arr,5);

	return 0;
}

*/
