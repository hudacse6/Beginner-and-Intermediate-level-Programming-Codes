#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    double opponent_run, current_run, ball, recent_runrate, expected_runrate, ball_played;
    int tcase;
    cin >> tcase;
    while ( tcase-- )
    {
        cin >> opponent_run >> current_run >> ball;
        ball_played = 300 - ball;
        recent_runrate = ( current_run / ball_played ) * 6;
        expected_runrate = ( ( ( opponent_run - current_run ) + 1 ) / ball ) * 6;
        printf ( "%.2lf  %.2lf\n", recent_runrate, expected_runrate );
    }
    return 0;
}
