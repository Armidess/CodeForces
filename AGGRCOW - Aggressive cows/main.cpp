#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];
    int flag=0;
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((upper_bound(A.begin()+j+1,A.end(),A[i]+A[j])-A.begin()) < n)
                flag++;
        }
    }
    cout<<flag;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*int t;
    cin>>t;
    while(t--)*/
    solve();
}
