#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t --)
    {
        int i,j,k;
        int n,m;
        cin>>n>>m;
        int a[n][m],b[m][n],res[n][m];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>b[i][j];
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                int sum=0;
                for(k=0; k<m; k++)
                {
                    sum = sum + (a[i][k]*b[k][j]);
                }
                res[i][j] = sum;
                cout<<res[i][j]<<"  ";
            }
            cout<<endl;
        }

    }
    return 0;
}
