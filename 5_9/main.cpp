#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(int a,int b)
{
    int temp=(a-1)%4;
    int Xor=1;
    if(temp==3)
        Xor=0;
    if(temp==0 )
        Xor=a-1;
    if(temp==2)
        Xor=a;

        int temp2=Xor^a;
        if(temp2==b)
            return a+2;
        else if(Xor==b)
            return a;
        return a+1;
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
        int a,b;
        cin>>a>>b;
        cout<<func(a,b)<<endl;
    }
}
