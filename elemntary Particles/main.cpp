#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    map<ll,vector<ll>> m;
    ll A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        m[A[i]].push_back(i);
    }
    ll mx=-1;
    for(auto it:m)
    {
        if(it.second.size()>1)
        {
            for(int i=0;i<it.second.size()-1;i++)
            {
                ll temp=it.second[i]+n-it.second[i+1];
                mx=max(mx,temp);
            }
        }
    }
    cout<<mx<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
