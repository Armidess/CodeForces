#include <bits/stdc++.h>
using namespace std;

int func(string a,string b,int n)
{
    int l=n;
    int flag=1;
    for(int i=1;i<b.length();i++)
    {

        if(b[i]==a[l+1] && l<a.length()-1 && flag)
        {
             l++;
             continue;
        }
        flag=0;
        if(b[i]==a[l-1] && l>0)
            l--;
        else
            return 0;
    }
    return 1;
}



int func(string a,string b)
{
    vector<int> index;
    for(int i=0;i<a.size();i++)
        if(b[0]==a[i])
            index.push_back(i);
    for(int i=0;i<index.size();i++)
    {
        if(func(a,b,index[i]))
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        func(a,b);
    }
}
