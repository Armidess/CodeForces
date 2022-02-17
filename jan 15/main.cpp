#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    char A[n][m];
    int flag=-1,ans=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
            if(A[i][j]=='B')
            {
                flag=0;
                if(i==r-1 || j==c-1)
                    ans=1;
            }
        }
    }
    if(flag==-1)
    {
        cout<<"-1\n";
        return ;
    }
    if(A[r-1][c-1]=='B')
    {
        cout<<"0\n";
        return ;
    }
    if(ans==-1)
    {
        cout<<"2\n";
        return ;
    }
    cout<<"1\n";
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
}
