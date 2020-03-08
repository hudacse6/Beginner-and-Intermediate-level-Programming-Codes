#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a= 212;
    int divisor =  9;
    int result = 0;
    int new_a = a ;

    while( new_a  >= divisor)
    {
        new_a = new_a - divisor ;
        result = result +1;
    }

    printf("If %d is divided by %d ,\n",a,divisor);
    printf("the result is: %d\n",result );

    if(new_a != 0)
    {
        printf("and the remainder is : %d\n",new_a);
    }
    return 0;
}

