#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<int> v;
    ll s,a;
    cin>>a>>s;
    while(a>0 || s>0)
    {
        if(s==0)
        {
            cout<<"-1\n";
            return ;
        }
        int t1,t2;
        t1=a%10;
        t2=s%10;
        if(t2-t1>=0)
        {
            v.push_back(t2-t1);
            s=s/10;
            a=a/10;
            continue;
        }
        else
        {
            t2=s%100;
            if(t2>18 || t2<10)
            {
                cout<<"-1\n";
                return ;
            }
            v.push_back(t2-t1);
            s=s/100;
            a=a/10;
        }
    }
    ll temp=0;
    for(int i=v.size()-1;i>=0;i--)
        temp= 10*temp+v[i];

    cout<<temp<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
