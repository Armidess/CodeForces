#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int par[10001],n,e;
struct edge
{
    int a,b,w;
};

edge ar[100000];
bool comp(edge a,edge b)
{
    return a.w<b.w;
}

void merge(int a,int b)
{
    if(a>b)
        swap(a,b);
    par[b]=a;
}

int find(int a)
{
    if(-1==par[a])
        return a;
    return par[a]=find(par[a]);
}
void create()
{
    fstream fin;
    fin.open("input.txt",ios::in);
    int num,i=0;
    e=0;
    fin>>num;
    n=num;
    while(!fin.eof())
    {
        fin>>ar[i].a>>ar[i].b>>ar[i].w;
        i++;
        e++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        create();
        for(int i=1;i<=n;i++)
            par[i]=-1;
        int sum=0;
        sort(ar,ar+e,comp);
        for(int i=0;i<e;i++)
        {
            int a=find(ar[i].a);
            int b=find(ar[i].b);
            if(a!=b)
            {
                sum+=ar[i].w;
                merge(a,b);
                cout<<ar[i].a<<"->"<<ar[i].b<<" "<<ar[i].w<<endl;
            }
        }
        cout<<sum<<endl;
    }
}
