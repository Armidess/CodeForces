#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void func(int n)
{
    if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i || j==n-1-i)
                    cout<<"1 ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
        return ;
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==i || j==n-1-i || (i==n/2 && j==i+1) || (j==n/2 && i==j+1))
                    cout<<"1 ";
                else
                    cout<<"0 ";
            }
            cout<<endl;
        }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        func(n);
    }
}
