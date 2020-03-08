//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{

    char n[101];
    int T,j,k;
    cin>>T;
    while(T--)
    {
        cin>>n[j];
        k=strlen(n);
        if(  n[k-1] % 2==1)
        {
            cout<<"odd"<<endl;
        }
        else
        {
            cout<<"even"<<endl;
        }
    }
    return 0;
}
