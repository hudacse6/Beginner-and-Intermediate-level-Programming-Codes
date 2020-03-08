#include <bits/stdc++.h>
#include<vector>
#include <queue>
using namespace std;
#define NoV 7
                       //A,B,C,D,E,F,G
    int Edge[NoV][NoV]={{0,1,0,0,1,0,0},//A
                        {0,0,1,0,0,0,0},//B
                        {0,0,0,1,0,0,0},//C
                        {0,0,0,0,0,0,1},//D
                        {0,0,0,0,0,1,0},//E
                        {0,0,0,0,0,0,0},//F
                        {0,0,0,0,0,1,0}};//G
    int fDiscvd[NoV] = {0,0,0,0,0,0,0};
    int level[NoV] = {-1,-1,-1,-1,-1,-1,-1};
    int parent[NoV] = {-1,-1,-1,-1,-1,-1,-1};
    int dt[NoV];
int main()
{
    queue<int> myQueue;
    myQueue.push(2);
    fDiscvd[2]=1;
    level[2]=0;
    while(!myQueue.empty())
    {
        int u = myQueue.front();
        myQueue.pop();
        for(int v=0;v<NoV;v++)
        {
            if( Edge[u][v]==1  && fDiscvd[v]==0 )
            {
                myQueue.push(v);
                fDiscvd[v]=1;
                level[v]=level[u]+1;
                parent[v]=u;
            }
        }
    }
    for(int i=0;i<NoV;i++)
        cout<<"Level: "<<level[i]<<"\tParent: "<<parent[i]<<endl;
    return 0;
}
