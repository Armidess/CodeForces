#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void func(ll n,ll m,ll k)
{
    if(n==1)
    {
        if(k>1)
        {
            cout<<"YES\n";
            return ;
        }
        cout<<"NO\n";
        return ;
    }
    if(m<n-1)
    {
        cout<<"NO\n";
        return ;
    }
    if(m>(n*(n-1))/2)
    {
        cout<<"NO\n";
        return ;
    }
    if(m==(n*(n-1))/2)
    {
        if(k>2)
        {
            cout<<"YES\n";
            return ;
        }
        cout<<"NO\n";
        return ;
    }
    if(m==n-1)
    {
        if(k>3)
        {
            cout<<"YES\n";
            return ;
        }
        cout<<"NO\n";
        return ;
    }
    cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        func(n,m,k);
    }
}
