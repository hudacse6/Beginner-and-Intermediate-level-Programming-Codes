#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< int > v1  ;  //zero length vector
    //cout<<"Zero length vector. "<<v1[1];

    vector< int > v2 {10,30,10};
    cout<<"V2. "<<v2.capacity()<<endl;
    cout<<"V2 - "<<v2[0]<<endl;
    cout<<"V2 - "<<v2[1]<<endl;
    cout<<"V2 - "<<v2[2]<<endl;

    vector< string > v3 {"Hello","World"};
    cout<<"V3-"<<v3[0]<<endl;

    vector< string > v4 (3, "vector");
    cout<<"V4-"<<v4[1]<<endl;

    vector< char > v5 (5); // it put 5 char vector


    vector< char > v6 (4,'a'); // it put 5 char vector
    for( int i=0 ; i< 4 ; i++ )
    {
        cout<<"Char. " <<v6[i] << endl;
    }
    vector< int > v7 (5,12); // it put 12 in all 5 box.




    return 0;
}
