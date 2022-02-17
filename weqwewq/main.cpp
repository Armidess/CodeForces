#include <bits/stdc++.h>
using namespace std;

void func(string s)
{
    int l=-1,m=-1;
    for(int i=0;i<s.length();i++)
        if(s[i]=='a')
        {
            l=i;
            m=i;
        }
    if(l==-1)
    {
        cout<<"NO\n";
        return ;
    }
    int flag=0;
    if(l==0)
        flag=1;
    if(l==s.length()-1)
        flag=2;


    if(flag)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[l]!='a'+i)
            {
                cout<<"NO\n";
                return ;
            }
            if(flag==1)
                l++;
            else
                l--;
        }
        cout<<"YES\n";
        return ;
    }
    l--;
    m++;
    for(int i=1;i<s.length();i++)
    {
        if(s[l]=='a'+i)
            l--;
        else if(s[m]=='a'+i)
                m++;
            else
            {
                cout<<"NO\n";
                return ;
            }
    }
    cout<<"YES\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        func(s);
    }
}
