#include<bits/stdc++.h>
using namespace std;
#define a 5
int main()
{
    static int niton[a]={1,2,3,4,5};
    for(int i=1 ; i<=a ; i++)
        printf("Niton[%d] = %d\n", i , niton[i-1]);
}
