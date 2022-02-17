#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<pair<ll,ll>> v[1001];
#define INF 1000000000
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,e;
    cin>>n>>e;
    vector<int> dist(n+1,INF);
    for(int i=0;i<e;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back({w,b});
        v[b].push_back({w,a});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,1});
    dist[1]=0;
    while(!pq.empty())
    {
        int curr=pq.top().second;
        int currdist=pq.top().first;
        pq.pop();
        for(pair<int,int> edge : v[curr])
        {
            if(dist[edge.second]>edge.first+currdist)
            {
              dist[edge.second]=dist[curr]+edge.first;
              pq.push({dist[edge.second],edge.second});
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<dist[i]<<"  ";
}
