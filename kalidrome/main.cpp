#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int palim(vector<ll> v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[n-i-1])
        return 0;
    }
    return 1;
}

void solve()
{
    ll n;
    cin>>n;
    ll A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int temp=-1;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=A[n-i-1])
        {
            temp=i;
            break;
        }
    }
    if(temp==-1)
    {
        cout<<"Yes\n";
        return ;
    }
    ll t=A[temp];
    vector<ll> v;
    for(int i=temp+1;i<n-temp;i++)
    {
        if(A[i]!=t)
            v.push_back(A[i]);
    }
    if(palim(v))
    {
        cout<<"Yes\n";
        return ;
    }
    t=A[n-temp-1];
    vector<ll> v1;
    for(int i=temp;i<n-temp-1;i++)
    {
        if(A[i]!=t)
            v1.push_back(A[i]);
    }
    if(palim(v1))
    {
        cout<<"Yes\n";
        return ;
    }
    cout<<"No\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
