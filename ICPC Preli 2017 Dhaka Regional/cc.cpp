#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,row,column,cont=0;
    scanf("%d",&n);
    int a[n][n];
    for(row=0; row<n; row++)
    {
        for(column=0; column<n; column++)
            scanf("%d",&a[row][column]);
    }
    if(n==5)
    {

    }
    else if(n==10)
    {
        int cc=0;
        for(row=0; row<10; row++)
        {
            for(column=1; column<10; column++)
            {
                if(a[row][column-1] > a[row][column])
                    swap(a[row][column-1],a[row][column]);
            }
        }
        for(row=0; row<10; row++)
        {
            for(column=0; column<10; column++)
            {
                if(a[row][column] != column+1)
                    break;
                else
                    cc++;
            }
            if(cc==10)
                cont++;
        }
    }
    else
        printf("Case : 0");


        return 0;
    }
