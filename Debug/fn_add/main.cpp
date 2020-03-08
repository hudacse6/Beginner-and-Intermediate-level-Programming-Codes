#include<bits/stdc++.h>
using namespace std;


float change_data(int r , int n , int s)
{
    int result ;
    result = r + n + s;
    return result;

}

int main()
{
    float result;
    result = change_data(15,12,11);
    printf("r : %f ", result);
}
