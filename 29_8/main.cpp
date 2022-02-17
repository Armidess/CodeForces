#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int getParity(unsigned int n)
{
    int parity = 0;
    while (n)
    {
        parity = !parity;
        n     = n & (n - 1);
    }
    return parity;
}
ll func(ll n,ll A[])
{
    ll f=0,b=0,cc=0,ans=0;
    for(int i=0;i<n;i++)
    {

    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>a;
        ll A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        cout<<func(n,A)<<endl;
    }
}
