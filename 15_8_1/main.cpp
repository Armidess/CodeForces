#include <bits/stdc++.h>
using namespace std;

void func(int n,int A[])
{
    if(n==1)
    {
        if(A[1]==0)
        {
            cout<<"1 2\n";
            return ;
        }
        cout<<"2 1\n";
        return ;
    }
    if(A[n]==0)
    {
        for(int i=1;i<=n+1;i++)
            cout<<i<<" ";
        cout<<endl;
        return ;
    }
    int temp=-1,pos;
    for(int i=1;i<n;i++)
    {
        if(A[i]==0 && A[i+1]==1)
            temp=1,pos=i;
    }
    if(temp==-1 )
    {
        cout<<"-1\n";
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=pos)
        {
            cout<<i<<" ";
        }
        else
        {
            cout<<i<<" "<<n+1<<" ";
        }
    }
    return ;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n+1];
        for(int i=1;i<=n;i++)
            cin>>A[i];
        func(n,A);
    }
}
