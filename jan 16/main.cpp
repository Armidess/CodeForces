#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
	int n,k;
	cin>>n>>k;
	ll A[n];
	map<ll,vector<ll>> m;
	set<ll> s;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		s.insert(A[i]);
		m[A[i]].push_back(i+1);
	}
	vector<pair<ll,ll>> p;
	for(auto i: s)
		for(int j=0;j<k && j<m[i].size();j++)
			p.push_back(make_pair(m[i][j],-1));

	for(int i=1;i<=p.size();i++)
		p[i-1].second=((i-1)%k)+1;

	sort(p.begin(),p.end());
	int j=1;
	for(int i=0;j<=n;j++)
	{
		if(p[i].second!=j)
			cout<<"0 ";
		else
		{
			cout<<p[i].second<<" ";
			i++;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
		solve();
}
