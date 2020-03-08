#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[] = {10, 20, 30};
    int i, j, temp;
    for ( i = 0, j = 2; i < 3,i<j ; i++, j-- )
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for ( i = 0; i < 3; i++ )
    {
        printf ( "%d\n", ara[i] );
    }

//    int arr[5] ={1 , 2, 3, 4, 5};
//
//    int pos;
//
//    for(int i= 4 ; i>=0  ; i--)
//    {
//           printf("%d\t",arr[i]);
//    }

    return 0;
}
