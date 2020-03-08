#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back ( 3 ); // [3]
    v.push_back ( 2 ); // [3,2]
    v.push_back ( 5 ); // [3,2,5]

    cout << v[0] << "\n"; // 3
    cout << v[1] << "\n"; // 2
    cout << v[2] << "\n"; // 5

    cout<<"--------------------"<<endl;
    for ( int i = 0; i < v.size(); i++ )
    {
        cout << v[i] << "\n";
    }

    cout<<"--------------------"<<endl;
    for (auto x : v)
    {
        cout << x << "\n";
    }

    cout<<"--------------------"<<endl;
    v.push_back(5);
    v.push_back(2);
    cout << v.back() << "\n"; // 2
    v.pop_back();
    cout << v.back() << "\n"; // 5


    return 0 ;
}


