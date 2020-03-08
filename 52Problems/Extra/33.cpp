#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c;
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        cin>>a>>b>>c;
        for( int i=a ;  i<= b ; i++  )
        {
            if(i % c== 0)
            cout<<i<<"\n";
        }
    }
    return 0;
}
