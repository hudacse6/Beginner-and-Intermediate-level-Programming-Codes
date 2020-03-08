#include<bits/stdc++.h>
using namespace std;
int main()
{
    char binary[] = "10110";
    int len = strlen ( binary );
    int decimal = 0;
    int position = len-1;
    for(int i= 0 ; i<len ; i++)
    {
        decimal= decimal + pow(2,position);
        position--;
    }
    cout<<  decimal;
}
