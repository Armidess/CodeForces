#include <bits/stdc++.h>
using namespace std;

int func(int n,int a[])
{
    if(n==1)
    return a[0];
    int op=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(a[i]>a[i+1])
            {
                op+=a[i]-a[i+1];
                a[i]=a[i+1];
            }
        }
        else if(i==n-1)
            {
                if(a[i]>a[i-1])
                {
                    op+=a[i]-a[i-1];
                    a[i]=a[i-1];
                }
            }
            else if(a[i]>a[i+1] && a[i]>a[i-1])
            {
                op+=a[i]-max(a[i+1],a[i-1]);
                a[i]=max(a[i+1],a[i-1]);
            }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            continue;
            if(i==0)
            cnt+=a[i];
            if(i==n-1)
            {
                cnt+=a[i];
                continue;
            }
                cnt+=abs(a[i+1]-a[i]);
    }
    return cnt+op;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<func(n,a)<<endl;
    }

}
