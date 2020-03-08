#include<bits/stdc++.h>
using namespace std;

void st_fn ( void )
{
    cout << "hello world";
}
int nd_fn ( int call_1st_fn )
{
    st_fn();
    return call_1st_fn * call_1st_fn;
}
int main()
{
    int call;
    call = nd_fn ( 4 );
    cout << call << endl;
    return 0;
}
