#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long int
vector<int> g[100001];
vector<int> vis(100001);

void dfs(int i,int mn)
{
    vis[i]=1;
    if(i<mn)
        mn=i;
    for(int child : g[i])
        if(vis[child]==0)
            dfs(child,mn);
}
int func(int n)
{
    for(int i=1;i<=n;i++)
}


int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int q;
    cin>>q;
    vector<int> temp=g;
    for(int i=0;i<q;i++)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        if(t==2)
        {
            int u,v;
            cin>>u>>v;
            g[u].erase(std::remove(g[u].begin(),g[u].end(),v),g[u].end());
            g[v].erase(std::remove(g[v].begin(),g[v].end(),u),g[v].end());
        }
        if(t==3)
        {
            cout<<func(n)<<endl;
            g=temp;
        }
    }
}
