#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    if(n==1 || (s[0]==s[1]))
    {
        string s1="";
        s1+=s[0];
        s1+=s[0];
        cout<<s1<<endl;
        return ;
    }
    string s1="";
    for(int i=0;i<s.length();i++)
    {
        s1+=s[i];
        if(i==s.length() || s[i]<s[i+1])
            break;

    }
    string s2=s1;
    reverse(s1.begin(),s1.end());
    s2+=s1;
    cout<<s2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
