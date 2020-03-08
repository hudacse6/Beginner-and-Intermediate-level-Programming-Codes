// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;

// function to convert decimal to binary
void decToBinary ( int n )
{
    // array to store binary number
    int binaryNum[1000];
    // counter for binary array
    int i = 0;
    while ( n > 0 )
    {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // printing binary array in reverse order
    for ( int j = i - 1; j >= 0; j-- )
        cout << binaryNum[j];
}

// Driver program to test above function
int main()
{
    int n = 17;
    decToBinary ( n );
    return 0;
}


/// Decimal to Binary
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int p = 0, n, dc = 114, i;
//    for ( i = 0 ; i < dc ; i++ )
//    {
//        n = pow ( 2, i );
//        if ( n < dc ) {}
//        else break;
//    }
//    for ( int j = 0 ; j < i ; j++ )
//    {
//        if ( dc % 2 == 0 ) cout << "0";
//        else cout << "1";
//        dc = dc / 2;
//    }
//    return 0;
//}


/// Binary to Decimal
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    char binary[] = "10110"; /// ans 22
//    int len = strlen ( binary );
//    int decimal = 0;
//    int position = len - 1;
//    for ( int i = 0 ; i < len ; i++ )
//    {
//        decimal = decimal + ( binary[i] - '0' ) * pow ( 2, position );
//        position--;
//    }
//    cout <<  decimal;
//}
