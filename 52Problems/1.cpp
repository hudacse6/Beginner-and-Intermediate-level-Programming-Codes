#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    long int n;
    scanf("%d",&t);

    i=0;
    while(i<t)
    {
        scanf("%ld",&n);
        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");

        i++;
    }
    return 0;
}
