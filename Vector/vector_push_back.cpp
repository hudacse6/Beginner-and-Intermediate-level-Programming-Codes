#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< int > v1  ;  //zero length vector
    //cout<<"Zero length vector. "<<v1[1];
//    cout<<"V1. "<<v1.capacity()<<endl;
//    v1.push_back(10);
//    cout<<"V1. "<<v1.capacity()<<endl;
//    v1.push_back(20);
//    cout<<"V1. "<<v1.capacity()<<endl;
//    v1.push_back(30);
//    cout<<"V1. "<<v1.capacity()<<endl;
//    v1.push_back(40);
//    cout<<"V1. "<<v1.capacity()<<endl;
//    v1.push_back(50);
//    cout<<"V1. "<<v1.capacity()<<endl;

//    cout<<"V1 Capacity. "<<v1.capacity()<<endl ;
//    for(int i= 0 ; i<10 ; i++)
//        v1.push_back(10*(1+i) ) ;
//    cout<<"V1 Capacity. "<<v1.capacity()<<endl ;
//
//    for(int i= 0 ; i<v1.size() ; i++)
//        cout<<"V1 Elements. "<<v1[i]<<endl ;
//    cout<<"V1 Capacity. "<<v1.capacity()<<endl ;
//
//    cout<<"1st value is : "<<v1.front()<<endl;
//    cout<<"Last value is : "<<v1.back()<<endl;
//    v1.pop_back();
//    cout<<"Index value is. "<<v1.at(3)<<endl;
//    v1.clear();
//    cout<<"V1 Capacity. "<<v1.size()<<endl ;

      for(int i= 0 ; i<10 ; i++)
        v1.push_back(10*(1+i) ) ;

    vector<int>:: iterator it=v1.begin();
    v1.insert(it+2,35);

    for(int i= 0 ; i<v1.size() ; i++)
        cout<<"V1 Elements. "<<v1[i]<<endl ;
















    return 0;
}
