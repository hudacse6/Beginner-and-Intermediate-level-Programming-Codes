#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    for ( int i = 0, j = 9 ; i <=9,j>=0 ; i++, j-- )
    {
        arr2[j] = arr1[i];
        printf ( "[%d] = %d | %d\n", i, arr2[j], arr1[i] ) ;
    }

    cout<<"-------------------"<<endl;
    for(int i= 0 ; i< 10 ; i++)
    {

         arr1[i]=arr2[i];
         printf("%d\n", arr1[i] );

    }
}
//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[10];
//
//    for(int i= 9 ; i>=0 ; i--)
//    {
//        arr2[i]=arr1[i];
//        printf("[%d] = %d\n",i,arr2[i]);
//    }
//
//    for(int j= 0 ; j<10 ; j++)
//    {
//        printf("[%d] = %d\n",j, arr2[j]);
//    }
//
//
//   return 0;
//}
