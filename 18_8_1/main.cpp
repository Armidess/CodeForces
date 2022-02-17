#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int sq(ll x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
        return 0;
}
int func(int k)
{
    if(sq(k))
    {
        cout<<sqrt(k)<<" 1"<<endl;
        return 0;
    }
    int temp=sqrt(k);
    int f,b;
    f=(temp+1)*(temp+1);
    b=temp*temp;
    if(f-k<k-b)
    {
        cout<<sqrt(f)<<" "<<f-k+1<<endl;
        return 0;
    }
    cout<<k-b<<" "<<sqrt(b)+1<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        func(k);
    }
}
