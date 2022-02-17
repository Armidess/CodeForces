#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    priority_queue<pair<ll,ll>> pq;
    for(int i=1;i<=n;i++)
    {
        ll temp;
        cin>>temp;
        if(temp)
        pq.push(make_pair(temp,i));
    }
    vector<pair<ll,ll>> v;
    while(pq.size()>1)
    {
        pair<ll,ll> p,q;
        p=pq.top();
        pq.pop();
        q=pq.top();
        pq.pop();
        p.first--;
        q.first--;
        v.push_back({q.second,p.second});
        if(p.first)
            pq.push(p);
        if(q.first)
            pq.push(q);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
}
