#include<bits/stdc++.h>
using namespace std;

int main()
{
    int inputNumber = - 11;
int absInputNumber = abs(inputNumber);
cout<<absInputNumber<<endl;
int i = 0;
while(i < absInputNumber) {
    i += 2  ;
}
if(inputNumber==i)
    printf("Even Number");
else
    printf("Odd Number");
}
