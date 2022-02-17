#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n+1);
    for(int i=1;i<=n;i++)
        cin>>A[i];
    for(int i=1;i<=n;i++)
    {
        int brk=1;
        for(int j=i+1;j>=2;j--)
        {
            if(A[i]%j!=0)
            {
                brk=0;
                break;
            }
        }
        if(brk)
        {
            cout<<"No\n";
            return ;
        }
    }
    cout<<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
}
