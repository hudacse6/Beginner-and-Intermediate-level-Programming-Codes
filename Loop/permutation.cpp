#include<bits/stdc++.h>
using namespace std;
int main()
{
    for ( int a = 1 ; a <= 3 ; a++ )
    {
        for ( int b = 1 ; b <= 3 ; b++ )
        {
            for ( int c = 1 ; c <= 3 ; c++ )
            {
                if ( b != a && a != c && b != c )
                {
                    printf ( "%d %d %d\n", a, b, c ) ;
                }
            }
        }
    }
    return 0;
}























//#include<bits/stdc++.h>
//using namespace std;
//int main()
//// #define fixed_value 3
//
//{
//    const int fixed_value = 3;
//    for ( int a = 1 ; a <= fixed_value; a++ )
//    {
//        for ( int b = 1 ; b <= fixed_value ; b++ )
//        {
//            for ( int c = 1 ; c <= fixed_value ; c++ )
//            {
//                if ( a != b && b != c && c != a ) ///mathematical calculation
//                {
//                    printf ( "%d %d %d\n", a, b, c );
//                }
//            }
//        }
//    }
//    return 0;
//}
