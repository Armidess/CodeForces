#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    ll a=n-1,b=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1' && s[i+1]=='1')
        {
            a=i;
            break;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]=='0' && s[i+1]=='0' )
        {
            b=i;
            break;
        }
    }
    if(b>a)
    {
        cout<<"NO\n";
        return ;
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
