#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void func(vector<ll> a,int n)
{
    vector<vector<int>>ok;
    for (int i=0;i<n;i++) {
        int itr = max_element(a.begin(), a.end()) - a.begin();
        if (itr != n - i - 1) {
          ok.push_back({itr + 1, n - i, 1});
        }
        a.erase(a.begin() + itr);
    }
    cout<<ok.size()<<" "<<"\n";
    for(auto i : ok) cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> A(n);
        for(int i=0;i<n;i++)
            cin>>A[i];
        func(A,n);
    }
}
