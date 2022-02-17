#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    int mx=1;
    while(n>0)
    {
        if(n%10>mx)
            mx=n%10;
        n/=10;
    }
    return mx;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<func(n)<<endl;
    }
}
