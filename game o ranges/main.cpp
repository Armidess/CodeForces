#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    map<pair<int,int>,bool> m;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        m[make_pair(a,b)]=true;
    }
    for(auto it:m)
    {
        int l=it.first.first;
        int r=it.first.second;
        if(l==r)
        {
            cout<<l<<" "<<r<<" "<<l<<endl;
            continue;
        }
        for(int i=l;i<=r;i++)
        {
            if(i-1>=l && r>=i+1)
            {
                if(m.find(make_pair(l,i-1))!=m.end() &&
                    m.find(make_pair(i+1,r))!=m.end())
                {
                    cout<<l<<" "<<r<<" "<<i<<endl;
                    break;
                }
            }
            else if(i-1>=l)
            {
                if(m.find(make_pair(l,i-1))!=m.end())
                {
                    cout<<l<<" "<<r<<" "<<i<<endl;
                    break;
                }
            }
            else if(r>=i+1)
            {
                if(m.find(make_pair(i+1,r))!=m.end())
                {
                    cout<<l<<" "<<r<<" "<<i<<endl;
                    break;
                }
            }
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
