#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=5,n=0;
    for(int i= 0 ; i<100 ; i+=10)
    {
          n = m * i;
          printf("%d x %d = %d\n",m ,i ,n);
    }
}
