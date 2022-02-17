#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(int n,ll A[])
{
    sort(A,A+n);
    ll mx=A[0];
    for(int i=1;i<n;i++)
        mx=max(mx,A[i]-A[i-1]);
    return mx;
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
        int n;
        cin>>n;
        ll A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        cout<<func(n,A)<<endl;
    }
}
