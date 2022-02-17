#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int check(ll A[],ll n,ll i,ll target,map<ll,int> &m)
{
    if(target!=A[i] && m[target]>0)
        return m[target];
    if(target==A[i])
    {
        if(m[target]>1)
            return m[target]-1;
    }
    return 0;
}

void solve()
{
    ll n;
    cin>>n;
    ll A[n];
    ll sum=0;
    map<ll,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
        m[A[i]]++;
    }
    if((2*sum)%n!=0)
    {
        cout<<"0\n";
        return;
    }
    ll target=2*sum/n;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        flag+=check(A,n,i,target-A[i],m);
        m[A[i]]--;
    }
    cout<<flag<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
