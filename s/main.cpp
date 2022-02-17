#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000001];
int cc[1000001],vis[1000001];
int current;


void dfs(int n)
{
    if(vis[n]==0)
    {
        vis[n]=1;
        cc[n]=current;
        for(int child : v[n])
        if(vis[child]==0)
            dfs(child);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            vis[i]=0,v[i].clear();
        current=0;
        vector<pair<int,int> > p;
        for(int i=0;i<k;i++)
        {
            int a,b;
            string s;
            cin>>a>>s>>b;
            if(s=="=")
            {
                v[a].push_back(b);
                v[b].push_back(a);
            }
            else
                p.push_back({a,b});
        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                current++;
                dfs(i);
            }
        }bool flag=true;
        for(int i=0;i<p.size();i++)
        {
            int a=p[i].first;
            int b=p[i].second;
            if(cc[a]==cc[b])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
