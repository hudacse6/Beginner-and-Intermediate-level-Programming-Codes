#include<bits/stdc++.h>

using namespace std;

int main()
{
    /// A=65 , B=66
    /// IF we used else statement then it works with the nearest ( 'if' without 'else' )
    int test_score = 80;
    int current_grade = 'B';
    if ( test_score >= 90 )

        if ( current_grade == 'B' )
            printf ( "\n\a Congrates u got A" )   ;

    else
        printf("\n\a Sorry! You should work hard");

    return 0;
}
