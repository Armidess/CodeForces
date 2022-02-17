#include <bits/stdc++.h>
using namespace std;
vector<int> v[10000],prime;
int dist[10000],vis[10000];

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
bool isvalid(int a,int b)
{
    int cnt=0;
    while(a>0)
    {
        if(a%10!=b%10)
            cnt++;
        a=a/10;
        b=b/10;
    }
    if(cnt==1)
        return true;
    return false;
}

void graph()
{
    for(int i=1000;i<=9999;i++)
        if(isprime(i))
            prime.push_back(i);

    for(int i=0;i<prime.size();i++)
    {
        for(int j=i+1;j<prime.size();j++)
        {
            int a=prime[i],b=prime[j];
            if(isvalid(a,b))
            {
                v[a].push_back(b);
                v[b].push_back(a);
            }
        }
    }
}
void bfs(int n)
{
        queue<int> q;
        q.push(n);
        vis[n]=1;
        dist[n]=0;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(int child : v[curr])
                if(vis[child]==0)
                {
                    vis[child]=1;
                    dist[child]=dist[curr]+1;
                    q.push(child);
                }
        }
}

int main()
{
    int t,a,b;
    cin>>t;
    graph();
    while(t--)
    {
        for(int i=1000;i<=9999;i++)
        {
            dist[i]=-1;
            vis[i]=0;
        }
        cin>>a>>b;
        bfs(a);
        if(dist[b]==-1)
            cout<<"Impossible\n";
        else
            cout<<dist[b]<<endl;

    }
}
