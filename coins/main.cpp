#include <bits/stdc++.h>
using namespace std;

int func(int n1,int k,int a[])
{
    map<int,int> n;
    int temp=1;
    for(int i=0;i<n1;i++)
    {
        n[a[i]]++;
        if(n[a[i]]<=k)
        {
            a[i]=temp;
            temp++;
        }
        else
            a[i]=0;
        if(temp>k)
            temp=1;
    }
    if(temp>1)
    {
        for(int i=0;i<temp-1;i++)
            a[n1-1-i]=0;
    }
    for(int i=0;i<n1;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       int  a[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
       func(n,k,a);
   }
}
