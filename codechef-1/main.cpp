#include <bits/stdc++.h>
using namespace std;
#define  ll long long int
int func(int n,int A[])
{
    int cnt=0;
    int curr=0;
    int currv=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]<=A[i-1] && i!=n-1)
            continue;
        else if(A[curr+1]<=A[i] && A[i]<=currv)
        {
            curr=i;
            currv=A[i];
            cnt++;
        }
        else
        {
            if(i==n-1)
                continue;
            return -1;
        }
    }
    return n-curr-1+cnt;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
