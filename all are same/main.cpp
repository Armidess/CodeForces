#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    if(A[0]==A[n-1])
    {
        cout<<"-1\n";
        return;
    }
    if(A[0]==A[n-2])
    {
        cout<<A[n-1]-A[0]<<endl;
        return ;
    }
    int gd;
    int t=1;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]-A[0]==0)
            continue;
        if(t)
        {
            gd=A[i]-A[0];
            t=0;
        }
        gd=__gcd(gd,A[i+1]-A[0]);
    }
    cout<<gd<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
