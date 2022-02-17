#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    vector<ll> k(n),h(n);
    for(int i=0;i<n;i++)
        cin>>k[i];
    for(int i=0;i<n;i++)
        cin>>h[i];
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i].first=k[i]-h[i]+1;
        v[i].second=k[i];
    }
    //
    sort(v.begin(),v.end());
    ll l=1;
    ll r=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll l1=v[i].first;
        ll r1=v[i].second;
        if(l1>r)
        {
            sum+=((r-l+1)*(r-l+2))/2;
            l=v[i].first;
            r=v[i].second;
        }
        else if(l>l1)
        {
            r=max(r,r1);
            l=l1;
        }
        else
            r=max(r,r1);
    }
    sum+=((r-l+1)*(r-l+2))/2;
    cout<<sum<<endl;
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
