#include <bits/stdc++.h>
using namespace std;
#define ll long long int

/*void solve()
{
    ll f,m,l;
    cin>>f>>m>>l;
    if(((l+f)%(2*m)==0)|| ( ((2*m)-l)%f==0 && (2*m)-l>0 )
                      || ( ((2*m)-f)%l==0 && (2*m)-f>0) )
    {
        cout<<"YES\n";
        return ;
    }
    cout<<"NO\n";
}*/
void solve()
{
    int n;
    cin>>n;
    ll A[n];
    unordered_map<ll,ll> m;

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>n || m[A[i]]!=0)
        {
            while(A[i]>n || m[A[i]]!=0)
                A[i]=A[i]/2;
            if(A[i]>0 && m[A[i]]==0)
                m[A[i]]++;
        }
        else
        {
            if(m[A[i]]==0)
                m[A[i]]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(m[i]!=1)
        {
            cout<<"NO\n";
            return ;
        }
    }
    cout<<"YES\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
