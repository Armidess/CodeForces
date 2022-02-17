#include <bits/stdc++.h>
using namespace std;

int func(int n,int a[],int b[])
{
    int temp=n-(n/4);
    sort(a,a+n);
    sort(b,b+n);
    int sum1=0,sum2=0;
    for(int i=n-temp;i<n;i++)
    {
        sum1+=a[i];
        sum2+=b[i];
    }
    if(sum1>=sum2)
        return 0;
    if((sum2-sum1)%100==0)
        return (sum2-sum1)/100;
    return ((sum2-sum1)/100) + 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        cout<<func(n,a,b)<<endl<<endl;
    }
}
