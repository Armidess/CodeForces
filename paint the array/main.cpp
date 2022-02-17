#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    ll A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    if(n==2)
    {
        if(A[0]==A[1])
        {
            cout<<"0\n";
            return ;
        }
        cout<<max(A[0],A[1])<<endl;
       return ;
    }
    ll gcd1=A[0];
    ll gcd2=A[1];
    int t=n%2;

    for(int i=0;i<n;i+=2)
    gcd1=__gcd(gcd1,A[i]);

    for(int i=1;i<n;i+=2)
    gcd2=__gcd(gcd2,A[i]);

    if(gcd1==gcd2)
    {
        cout<<"0\n";
        return ;
    }
    int flag=1;

        for(int i=1;i<n;i+=2)
        {
            if(A[i]%gcd1==0)
            {
                flag=0;
                break;
            }
        }
    if(flag)
    {
        cout<<gcd1<<endl;
        return;
    }
    flag=1;
        for(int i=0;i<n;i+=2)
        {
            if(A[i]%gcd2==0)
            {
                flag=0;
                break;
            }
        }
    if(flag)
    {
        cout<<gcd2<<endl;
        return;
    }
    cout<<"0\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
