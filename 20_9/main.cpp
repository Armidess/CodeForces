#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll func(ll x,ll y,vector<ll> A)
{
    ll temp=0;
    int j=-1;
    ll coin=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>x)
        {
            temp=A[i];
            j=i;
            break;
        }
        if(A[i]==x)
        {
            temp=A[i];
            break;
        }
        if(i==A.size()-1)
            temp=A[i];
    }
    if(j!=-1 && j!=0)
    {
        ll X=0;
        X=min(temp-x,x-A[j-1]);
        if(A[j-1]+X==x)
        {
            temp=x;
            coin+=X;
        }
    }
    if(temp<x)
    {
        coin+=x-temp;
        temp=x;
    }
    ll tt=accumulate(A.begin(),A.end(),0)-temp+coin;
    if(tt>=y)
    return coin;
    return coin+y-tt;
}


int main()
{
 /*   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    int n;
    cin>>n;
    vector<ll> A;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        A.push_back(temp);
    }
    sort(A.begin(),A.end());
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<func(a,b,A)<<endl;
    }
}
