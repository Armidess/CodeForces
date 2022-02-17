#include <bits/stdc++.h>

using namespace std;





void appendAndDelete(string s, string t, int k) {
    int temp=0;
    int n=s.length();
    int m=t.length();
    for(int i=0;i<m;i++)
    {
        if(s[i]!=t[i])
            break;
        temp++;
    }

    temp = n-temp+m-temp;
    if(temp>k)
    {
        cout<<"No\n";
        return ;
    }
    else if(((k-temp)%2)!=0)
        {
            if(k-temp<(2*m))
            {
                cout<<"No\n";
                return ;
            }
        }
        cout<<"Yes\n";

}

int main()
{
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    appendAndDelete( s,  t,  k);
}
