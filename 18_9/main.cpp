#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll func()
{
    int n;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        cin>>B[i];
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        if(B[i]>A[0])
        {
            a=i;
            break;
        }
        if(A[i]<B[i])
            c=i;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]<B[0])
        {
            b=i;
            break;
        }
        if(i>=a)
            return a;
    }
    return min(a,b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
        cout<<func()<<endl;
}
