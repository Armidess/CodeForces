#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    ll A[n],flag=0;
    unordered_map<ll,ll> m;
    vector<ll> v,v1;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(m[A[i]]!=0 || A[i]>n)
            v.push_back(A[i]);
        m[A[i]]++;
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++)
    {
        if(m[i]==0)
            v1.push_back(i);
    }
    for(int i=0;i<v.size();i++)
    {
        if((v[i]%(v[i]-v1[i]))!=v1[i])
        {
            cout<<"-1\n";
            return ;
        }
        flag++;
    }
    cout<<flag<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
