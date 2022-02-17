#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n==4 && k==3)
    {
        cout<<"-1\n";
        return ;
    }
    if(k==0)
    {
        for(int i=0;i<n/2;i++)
        {
            cout<<i<<" "<<n-1-i<<endl;
        }
        return ;
    }
    if(k!=n-1)
    {
        cout<<"0 "<<n-1-k<<endl;
        for(int i=1;i<n/2;i++)
        {
            if(i==k || i==n-1-k)
                continue;
            cout<<i<<" "<<n-1-i<<endl;
        }
        cout<<n-1<<" "<<k<<endl;
        return;
    }
    cout<<"0 "<<n-1<<endl;
    ll K=1;
    for(int i=1;i<n/2;i++)
    {
        if(i==(n/2)-1)
            continue;
        if(i==K )
        {
            K*=2;
            continue;
        }
        cout<<i<<" "<<n-1-i<<endl;
    }
    K=n/2;
    for(int i=K;i>1;i/=2)
        cout<<i<<" "<<n-1-(i/2)<<endl;
    cout<<"1 "<<n-1-(n/2)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
}
