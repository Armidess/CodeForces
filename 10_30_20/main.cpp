#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ld long double
#define MAX 200010
#define MOD 1000000007
#define INF 1e15
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 3.14159265358979323846
#define endl "\n"
#define coutflg if(flg){cout << "YES\n";}else{cout << "NO\n";}
#define coutyes cout << "YES\n";
#define coutno cout << "NO\n";
#define flush fflush(stdout);
#define fixedprec cout << fixed << setprecision(18);

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<ll> r,b;
    for(ll i=0;i<n;i++){
        if(s[i]=='R'){
            r.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    sort(r.begin(),r.end());
    sort(b.begin(),b.end());
    // for(ll i=0;i<r.size();i++){
    //     cout << r[i] << " ";
    // }
    // cout << endl;
    // for(ll i=0;i<b.size();i++){
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    ll cur = 1;
    for(ll i=0;i<b.size();i++){
        if(b[i]<cur){
            cout << "NO\n";
            return;
        }
        cur++;
    }
    for(ll i=0;i<r.size();i++){
        if(r[i]>cur){
            cout << "NO\n";
            return;
        }
        cur++;
    }
    cout << "YES\n";
}

int main(){

    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        // freopen("output.txt", "w", stdout);
    #endif

    fast
    ll t,q;
    q = 1;
    cin >> q;
    for(t=1;t<=q;t++){
        // cout << "Case #" << t << ": ";
        solve();
    }
}
