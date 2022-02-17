#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int comp(vector<int> a,vector<int> b)
{
    return a[a.size()-1]-a.size()<b[b.size()-1]-b.size();
}
int func(int n,vector<vector<int>> v)
{
    if(n==1)
        return v[0][v[0].size()-1]+1;
    vector<pair<int,int>> mxpw;
    ll defeat=v[0].size();
    ll mn=v[0][v[0].size()-1]+1;
    for(int i=1;i<n;i++)
    {

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
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            vector<int> V;
            for(int j=0;j<temp;j++)
            {
                int t;
                cin>>t;
                V.push_back(t);
            }
            v.push_back(V);
            sort(v[i].begin(),v[i].end());
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
       // cout<<func(n,v)<<endl;
    }
}
