#include <bits/stdc++.h>
using namespace std;

int func(string a,string b,int l)
{
    int flag=1;
    for(int i=0;i<b.length();i++)
    {
        if(b[i]==a[l] && l<a.length()-1 && flag)
        {
             if(b.length()-i-1<=l)
             {
                 int j=i+1;
                 int k=l-1;
                 while(k>=0 && j<b.length())
                 {
                    if(b[j]!=a[k])
                     break;

                     if(k>=0 && j==b.length()-1)
                         return 1;
                     j++;
                     k--;
                 }
             }
            if(l!=a.length()-1)
            {
                l++;
                continue;
            }
        }
        flag=0;
        if(b[i]==a[l] && l>=0)
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
