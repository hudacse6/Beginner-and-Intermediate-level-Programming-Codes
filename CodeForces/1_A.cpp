#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,n;
    cin>>a>>b>>n;
    printf("%.llf \n", ceil(a/n) * ceil(b/n) );
    return 0;
}


//Input
//6 6 4
//Output
//4
//Answer
//4
//
//Input
//1 1 1
//1
//1
//
//Input
//2 1 1
//2
//2
//
//Input
//1 2 1
//2
//2
//
//Input
//2 2 1
//4
//4
//
//Input
//2 1 2
//1
//1
//
//Input
//1 1 3
//1
//1
//
//Input
//2 3 4
//1
//1
//
//Input
//1000000000 1000000000 1
//-2147483648
//1000000000000000000


