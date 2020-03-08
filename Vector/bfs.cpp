#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n;
    vector< int > v[n+1];
    stack< int > s;
    bool vis[n+1];
    for(int i=0; i<=n; i++)
        vis[i] = false;
    cin>>e;
    for(int i=0; i<e; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    s.push(1);
    vis[1]=true;
    while(!s.empty())
    {
        int temp;
        temp=s.top();
        cout<<temp<<endl;
        s.pop();
        int tsize=v[temp].size();
        for(int i=0; i<tsize; i++)
        {
            int w=v[temp][i];
            if(vis[w]==false)
            {
                s.push(w);
                vis[w]=true;
            }
        }
    }
    return 0;
}
