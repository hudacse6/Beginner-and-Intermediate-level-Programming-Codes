#include<bits/stdc++.h>
using namespace std;

void sum_of_all(int niton) //parameter
{
    int n,sum;
    sum=0;
    for(int n=0 ; n<= niton ; n++)
        sum+=n;
    printf("\nSum of all numbers from 1 to 100 is %d.\n",sum);
}


int main()
{
    sum_of_all(100);  // arguments
}
