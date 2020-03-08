#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

int LeetCode ( string str1, string str2 )
{
    int count1[CHARS] = {0}, count2[CHARS] = {0};
    for ( int i = 0; str1[i] != '\0'; i++ )
        count1[str1[i] - 'a']++;

    for ( int i = 0; str2[i] != '\0'; i++ )
        count2[str2[i] - 'a']++;

    int result = 0;

    for ( int i = 0; i < 26; i++ )
        result += abs ( count1[i] - count2[i] );

    return result;
}

int main()
{
    int result;
    string str1 = "delete", str2 = "leet";
    LeetCode ( str1, str2 );
    cout << result ;
    return 0;
}
