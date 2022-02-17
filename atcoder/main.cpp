#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void func(ll n,vector<string> s,vector<string> t)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j] && t[i]==t[j])
            {
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string> s(n),t(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>t[i];
        }
        func(n,s,t);
    }
}
