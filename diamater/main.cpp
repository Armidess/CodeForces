#include <bits/stdc++.h>
using namespace std;
vector<int> g[10001];
int vis[10001],dist[10001];

void dfs(int n,int dis)
{
    if(vis[n]==0)
    {
        vis[n]=1;
        dist[n]=dis;
        for(int i=0;i<g[n].size();i++)
            dfs(g[n][i],dist[n]+1);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,0);
    pair<int,int> longest;
    longest.first=1;
    longest.second=0;
    for(int i=1;i<=n;i++)
    {
        if(dist[i]>longest.second)
        {
            longest.second=dist[i];
            longest.first=i;
        }
    }
    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
        dist[i]=0;
    }

    dfs(longest.first,0);
    cout<<*max_element(dist+1,dist+n+1);
    return 0;
}
