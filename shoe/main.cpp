#include <bits/stdc++.h>
using namespace std;

int func(int n,int A[])
{
    map<int,int> m;
    int mn=A[0];
    for(int i=0;i<n;i++)
    {
        m[A[i]]++;
        if(A[i]<mn)
            mn=A[i];
    }
    if(mn==0)
        return n-m[mn];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==mn)
            continue;
        int temp;
        if(A[i]%2==0)
            temp=(A[i]/2)-1;
        else
            temp=A[i]/2;
        if(mn>temp)
            return n;
    }
    if(m[mn+1]>0)
        return n;
    return n-m[mn];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        cout<<func(n,A)<<endl;
    }
}
