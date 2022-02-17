#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void func(ll n,string s)
{
    for(ll i=(n/2);i<n;i++){
        if(s[i]=='0'){
            cout << 1 << " " << i+1 << " " << 1 << " " << i << endl;
            return;
        }
    }
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            cout << i+1 << " " << n << " " << i+2 << " " << n << endl;
            return;
        }
    }
    cout << 1 << " " << n-1 << " " << 2 << " " << n << endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        func(n,s);
    }
}
