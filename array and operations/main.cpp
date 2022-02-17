#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int comp(int a,int b)
{
    return b<a;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n,comp);
    ll a=0,b=k;
    ll sum=0;
    for(int i=0;i<k;i++)
        sum+=A[k+i]/A[i];
    for(int i=2*k;i<n;i++)
        sum+=A[i];
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
