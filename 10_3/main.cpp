#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(int n,ll x,ll A[],ll B[])
{
    sort(B,B+n);
    int brk=-1;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=B[i])
        {
            brk=i;
            break;
        }
    }
    if(brk==-1)
    {
        cout<<"YES\n";
        return 0;
    }
    brk=-1;
    if(n>=2*x)
        cout<<"YES\n";
    else
    {
        for(int i=n-x;i<x;i++)
        {
            if(A[i]!=B[i])
            {
                brk=1;
                break;
            }
        }
        if(brk==-1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        ll x;
        cin>>n>>x;
        ll A[n],B[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            B[i]=A[i];
        }
        func(n,x,A,B);
    }
}
