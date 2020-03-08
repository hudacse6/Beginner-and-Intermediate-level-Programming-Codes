#include<bits/stdc++.h>
using namespace std;

float  sum_of_all(int niton) //parameter
{
    int n,sum;
    sum=0;
    for(int n=0 ; n<= niton ; n++)
        sum+=n;
    printf("\nSum of all numbers from 1 to 100 is %d.\n",sum);
    return sum;
}


int main()
{
    int sum=0,p;
    sum=sum_of_all(100);  // arguments
    printf("The main value is %d",sum);
}

