#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int a1=a/10;
    switch(a1)
    {
    case 1:
        cout<< "grade A";
        break;
    case 2:
        cout<< "grade b";
        break;
    case 3:
        cout<< "grade c";
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        cout<< "grade d";
        break;
    default:
        cout<<"fail";
    }
return 0;
}
