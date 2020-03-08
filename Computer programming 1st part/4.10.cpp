#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    for(int a= 1 ; a <= 3 ; a++)
    {
        for(int b= 1 ; b <= 3 ; b++)
        {
            if( b != a)
            {
                for( int c= 1 ; c <= 3 ; c++)
                {
                    if( a != b && b!=c && c!=a)
                    cout<< a << b << c <<endl;
                }
            }
        }
    }

    return 0;
}
