#include <bits/stdc++.h>
using namespace std;

int func(int n,int a[])
{
    int b[n];
    map<int,int> m,q;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
        m[a[i]]++;
    }
    for(int i=0;i<n;i++)
        if(m[i+1]==0)
            s.push(i+1);
    int mx=0;
    for(int i=0;i<n;i++)
    {
        if(q[a[i]]==0)
            if(m[a[i]]>1 && (i+1)<s.top())
                b[i]=s.top(),s.pop();
            else
            q[a[i]]++,mx++;
        else
            b[i]=s.top(),s.pop();
    }
    cout<<mx<<endl;
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
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
        func(n,a);
    }
}
