#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,q,k;
ll A[100001];
ll B[100001];
ll C[100001];
void solve1()
{
    B[1]= 0;
    for(ll i=2;i<n;i++)
        B[i]=A[i+1]-A[i-1]-2;
    B[n]=0;
    C[1]=B[1];
    for(ll i=2;i<=n;i++)
        C[i]=B[i]+C[i-1];
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    if(l==r)
    {
        cout<<k-1<<endl;
        return ;
    }
    ll temp=A[l+1]-2;
    temp+=k-A[r-1]-1+C[r-1]-C[l];;
    cout<<temp<<endl;
}
int main()
{
    cin>>n>>q>>k;
    for(ll i=1;i<=n;i++)
        cin>>A[i];
    solve1();
    while(q--)
    solve();
}
