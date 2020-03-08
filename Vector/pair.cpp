#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int>p1;
    pair<int, string>p2;
    pair<int, float>p3;
    pair<string, int>p4;
    pair<string, string>p5;

    p1 = make_pair ( 19, 15 );
    cout << "Pair p1: " << p1.second << " " << p1.first << endl;

    p2 = make_pair ( 18, "Hadisur Rahman" );
    cout << "Pair p2: " << p2.first << " " << p2.second << endl;

    p3 = make_pair ( 18, 16.5f );
    cout << "Pair p3: " << p3.first << " " << p3.second << endl;

    p4 = make_pair ( "hello", 2017 );
    cout << "Pair p4: " << p4.first << " " << p4.second << endl;

    p5 = make_pair ( "hello", "world" );
    cout << "Pair p5: " << p5.first << " " << p5.second << endl;

    return 0;
}
