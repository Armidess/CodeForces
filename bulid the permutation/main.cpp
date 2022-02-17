#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int a,n,b;
    cin>>n>>a>>b;
    if(abs(a-b)>1 || a+b>n-2)
    {
        cout<<"-1\n";
        return ;
    }
    int A[n];
    for(int i=0;i<n;i++)
        A[i]=-1;
    if(a>b)
    {
        int temp=0;
        for(int i=1;(i<n-1 && temp<a);i+=2)
        {
            A[i]=n-temp;
            temp++;
        }
        temp=1;
        for(int i=n-1;i>=0;i--)
        {
            if(A[i]==-1)
            {
              A[i]=temp;
              temp++;
            }
        }
    }
    else if (b>a)
    {
        int temp=1;
        for(int i=1;(i<n-1 && temp<=b);i+=2)
        {
            A[i]=temp;
            temp++;
        }
        temp=b+1;
        for(int i=0;i<n;i++)
        {
            if(A[i]==-1)
            {
              A[i]=temp;
              temp++;
            }
        }
    }
    else
    {
        int temp=0;
        for(int i=1;(i<n-1 && temp<a);i+=2)
        {
            A[i]=n-temp;
            //cout<<temp<<"\t";
            temp++;
        }
        temp=1;
        for(int i=0;i<n;i++)
        {
            //cout<<A[i]<<"\t";
            if(A[i]==-1)
            {
              A[i]=temp;
              temp++;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
