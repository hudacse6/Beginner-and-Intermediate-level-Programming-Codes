#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,*z;
    x=44;
    y=40;
    z= &x;
    printf("x=%d y=%d z=%d.\n",x,y,z);
    y=*z; *z=10;
    printf("x=%d y=%d z=%d.\n",x,y,z);
    return 0;
}
