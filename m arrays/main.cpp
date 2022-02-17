#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll n,ll A[])
{
    if(accumulate(A,A+n,0)==0)
        return 0;
    int cnt=0,curr=1,flag=1;
    for(int i=0;i<n;i++)
    {
        if(A[i]==1 && A[(i+1)%n]==1 )
            curr++;
        else
            curr=1;
        if(curr>cnt)
            cnt=curr;
        if(i==n-1 && flag)
        {
            flag=0;
            i=-1;
        }
    }
    return cnt;
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
        ll A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        cout<<func(n,A)<<endl;
    }
}
