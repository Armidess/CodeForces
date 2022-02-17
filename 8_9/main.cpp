#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void func(int n,string s)
{
    char A[n][n];
    map<char,int> m;
    for(int i=0;i<s.length();i++)
        m[s[i]]++;
    if(n==2)
    {
        if(m['2']>0)
        {
            cout<<"NO\n";
            return ;
        }
    }
    if(n-m['1']<=2 && m['1']!=n)
    {
        cout<<"NO\n";
        return ;
    }
    for(int i=0;i<n;i++)
    {
        int temp=i+1;
        for(int j=0;j<n;j++)
        {
            if(s[i]=='1' && i!=j)
            {
                if(i>j)
                    continue;
                if(s[j]=='1')
                {
                    A[i][j]='=';
                    A[j][i]='=';
                }
                else
                {
                    A[i][j]='+';
                    A[j][i]='-';
                }
                continue;
            }
            if(i==j)
            {
                A[i][j]='X';
                continue;
            }
            if(j==temp)
            {
                if(s[temp]=='1')
                {
                    A[i][j]='-';
                    A[j][i]='+';
                    temp++;
                    continue;
                }
                A[i][j]='+';
                A[j][i]='-';
            }
            else if(j>i)
            {
                A[i][j]='-';
                A[j][i]='+';
            }
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }
}


int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        func(n,s);
    }
}
