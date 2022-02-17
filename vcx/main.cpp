#include<bits/stdc++.h>
using namespace std;
vector<int> v[100001];
int vis[100001];

void dfs(int n)
{
    if(vis[n]==0)
    {
        vis[n]=1;
        for(int i=0;i<v[n].size();i++)
        dfs(v[n][i]);
    }
}

int main()
{
	int n,m;
    cin>>n>>m;
    if(m!=n-1)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[b].push_back(a);
        v[a].push_back(b);
    }
    dfs(1);
    for(int i=1;i<n+1;i++)
    {
        if(vis[i]!=1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
