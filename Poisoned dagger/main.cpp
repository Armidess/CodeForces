#include <bits/stdc++.h>
using namespace std;
#define ll long long int




void solve()
{
    int n;
    ll h;
    cin>>n>>h;
    ll A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    ll m,r=h,l=1;

    while(l<=r)
    {
        m=(r+l)/2;
        ll sum = m;
      for (int i = 0; i < n - 1; ++i)
        sum += min(m, A[i + 1] - A[i]);

      if (sum < h)
        l = m + 1;
      else
        r = m - 1;
    }
    cout << r + 1 << '\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
