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
