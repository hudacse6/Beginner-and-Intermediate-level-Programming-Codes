#include<bits/stdc++.h>
using namespace std;

void func ( int get_arr[] )
{
    int n;
    for ( int i = 0 ; i < 5 ; i++ )
        printf ( " In d function :%d\n", get_arr[i] );
    get_arr[2] = 300;
}

int main()
{
    int niton[5] = {1, 2, 3, 4, 5};
    printf ( "In main function before : %d\n", niton[2] ); //3
    func ( niton );
    printf ( "In main function after :%d\n", niton[2] ); //300
    return 0;
}
