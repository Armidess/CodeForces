#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void bin(ll n,int B[])
{
    for(int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            B[i]++;
    }
}

void solve()
{
    int n,l;
    cin>>n>>l;
    ll A[n];
    int B[32];
    for(int i=0;i<32;i++)
        B[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        bin(A[i],B);
    }
    int temp=0;
    ll t=1;
    for(int i=0;i<32;i++)
    {
        if(n-B[i]<=B[i])
            temp+=t;
        t*=2;
    }
    cout<<temp<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();

}
