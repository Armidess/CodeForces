#include <bits/stdc++.h>
using namespace std;
int par1[100001],par2[100001];
int find1(int n)
{
    if(par1[n]==n)
        return n;
    return par1[n]=find1(par1[n]);
}
int find2(int n)
{
    if(par2[n]==n)
        return n;
    return par2[n]=find2(par2[n]);
}
void union1(int a,int b)
{
    a=find1(a);
    b=find1(b);
    if(b<a)
        swap(a,b);
    par1[b]=a;
}
void union2(int a,int b)
{
    a=find2(a);
    b=find2(b);
    if(b<a)
        swap(a,b);
    par2[b]=a;
}
int main()
{
        int n,m1,m2;
        cin>>n>>m1>>m2;
        for(int i=1;i<=n;i++)
            par1[i]=i,par2[i]=i;
        for(int i=0;i<m1;i++)
        {
            int u,v;
            cin>>u>>v;
            union1(u,v);
        }
        for(int i=0;i<m2;i++)
        {
            int u,v;
            cin>>u>>v;
            union2(u,v);
        }
        int cnt=0;
        vector<pair<int,int> > v;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(find1(i)!=find1(j) && find2(i)!=find2(j))
                {
                    cnt++;
                    union1(i,j);
                    union2(i,j);
                    v.push_back({i,j});
                }
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i].first<<" "<<v[i].second<<endl;
}

