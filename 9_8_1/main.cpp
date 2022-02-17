#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int bol=-1;
ll func(int n,ll a[],int k)
{
    map<ll,ll> m;
    int peek=0;
    int flag=1;
    int mp=0;
    for(int i=0;i<n-1;i++)
    {
        m[a[i]]++;
        if(i!=0 && (a[i]==a[i-1]))
            m[a[i]]--;
        if(a[i+1]>a[i] && flag==0)
        {
            peek++;
            flag=1;
        }
        else if(a[i]>a[i+1])
        {
            peek++;
            flag=0;
        }
        if(flag==1)
            bol=1;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]>1)
            mp=mp+m[a[i]]-1,m[a[i]]=0;
    }
    if(bol==-1 && peek+1<=k)
    {
        cout<<"YES\n";
        return 0;
    }
    else if((peek+mp<=k || n==1) && bol!=-1)
    {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bol=-1;
        int n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
       func(n,a,k);

    }
}
