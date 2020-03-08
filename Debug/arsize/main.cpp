#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[101];
    int i,Tcase;
    cin>>Tcase;
    while(Tcase--)
    {
        int n;
        cin>>n;
        for(i= 0 ; i<n ; i++)
        {
            cin>>ar[i];
        }
        for(i= 0 ; i<n ; i++)
        {
            cout<<ar[2*i]<<endl;
        }
    }

    return 0;
}
