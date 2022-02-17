#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       unsigned long long int A,B;
        cin>>A>>B;
        if(B!=1)
            cout<<"YES\n"<<A<<" "<<A*B<<" "<<A*(B+1)<<endl;
        else
            cout<<"NO\n";
    }
}
