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
    if(n==1)
    {
        cout<<"0\n";
        return;
    }
    int temp=-1;
    ll flag=0;
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]!=A[n-1])
        {
            temp=i;
            break;
        }
    }
    if(temp==-1)
    {
        cout<<"0\n";
        return;
    }
    while(temp>=0)
    {
        flag++;
        ll temp1=n-1-temp;
        ll t=temp-temp1;
        for(int i=temp;i>t;i--)
        {
            if(temp<0)
            {
                cout<<flag<<endl;
                return ;
            }
            A[temp]=A[n-1];
            temp--;
        }
        while(temp>=0 && A[temp]==A[n-1])
            temp--;

    }
    cout<<flag<<endl;
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
