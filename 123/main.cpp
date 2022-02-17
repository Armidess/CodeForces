#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int check(int a,int b,int c)
{
    while(a>=b)
    {
        if(b==a)
            return 1;
        a=a-c;
    }
    return 0;
}
void func(vector<ll> A)
{
    int n=A.size();
    if(A[0]<0)
    {
        for(int i=1;i<n;i++)
            A[i]=A[i]-A[0]+1;
        A[0]=1;
    }
    int T=A[1]-A[0];
    int temp=1;
    int brk=-1;
    while(T>1)
    {
        for(int i=1;i<n;i++)
        {
            if(check(A[i],A[0],T)==0)
            {
                brk=1;
                break;
            }
        }
        if(brk==-1)
            temp=T;
        T--;
    }
    if(T==1)
    cout<<"1"<<endl;
    else
        cout<<temp<<endl;
}


int main()
{
   /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<ll> A;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            A.insert(temp);
        }
        vector<ll> B;
        set<ll> :: iterator it=A.begin();
        for(it;it!=A.end();it++)
            B.push_back(*it);
        func(B);
    }
}
