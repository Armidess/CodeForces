#include<bits/stdc++.h>
using namespace std;
vector<int> v[10000],prime;
int dist[10000],vis[10000];

bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    bool a=isprime(n);
    cout<<a;
}
