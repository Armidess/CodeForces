#include <bits/stdc++.h>
using namespace std;

long long int func(int n,long long int A[],int k)
{
  long long int temp=(n*(n-1))-k*(A[n-1]|A[n-2]);
    int cnt=1,pos[2];
    pos[0]=0;
    long long int mn=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]==mn)
        {
            cnt++;
            if(cnt>2)
            {
                pos[0]=pos[1];
                pos[1]=i;
            }
            else
                pos[1]=i;
        }
        if(A[i]<mn)
        {
            pos[0]=i;
            mn=A[i];
            cnt=1;
        }
    }
    if(cnt>1)
    {
        long long int temp2=((1+pos[0])*(1+pos[1])) - (k*(A[pos[0]]|A[pos[1]]));
        return max(temp,temp2);
    }
    int mn2;
    if(A[0]==mn)
    {
        mn2=A[1];
        pos[1]=1;
    }
    else
    {
        mn2=A[0];
        pos[1]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]<mn2 && A[i]!=mn)
        {
            mn2=A[i];
            pos[1]=i;
        }
    }
    long long int temp2=((1+pos[0])*(1+pos[1])) - (k*(A[pos[0]]|A[pos[1]]));
     return max(temp,temp2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        cout<<func(n,A,k)<<endl;
    }
}
