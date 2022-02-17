#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool A[1000001];

int main()
{
    ll n;
    cin>>n;
    ll flag=0;
    for(int i=2;i*i<=n;i++)
    {
        if(A[i]==true)
        {
            flag++;
            for(int j=i+i;j<=n;j+=i)
                A[j]=false;
        }
    }
    cout<<flag<<endl;
}
