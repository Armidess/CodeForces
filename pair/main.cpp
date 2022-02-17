#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int func(int n,ll a[])
{
    if(n==1)
        return n;
    ll mn=INT_MAX;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        v.push_back(a[i]);
        else if(a[i]>0 && a[i]<mn)
                mn=a[i];
    }
    if(v.size()==0)
    return 1;
    sort(v.begin(),v.end());
    ll diff=v[1]-v[0];
    for(int i=0;i<v.size()-1;i++)
        if(v[i+1]-v[i]<mn)
            return v.size();
    return v.size()+1;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<func(n,a)<<endl;
    }
}
