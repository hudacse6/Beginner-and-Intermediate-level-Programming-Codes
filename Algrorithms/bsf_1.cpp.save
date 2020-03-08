#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    vector < int > adj[100];
    int visited[100];
    int n = 5;
    int s = 6;
    for ( int i = 0 ; i < n ; i++ ) visited[i] = 0 ;
    queue<int> Q;
    Q.push ( s );
    visited[s] = 1;
    while ( !Q.empty() )
        int u = Q.front() ;
    Q.pop();
    for ( int i = 0 ; i < adj[u].size(); i++ )
        if ( visited[u][i] == 0 )
        {
            int v = adj[u][i];
            visited[v] = 1;
            Q.push ( v );
        }
}

