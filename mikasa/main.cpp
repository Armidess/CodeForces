#include <bits/stdc++.h>
using namespace std;

unsigned int bits(unsigned int number){
   unsigned int cnt = 0;
   unsigned i;
   while (number){
      cnt++;
      number >>= 1;
   }
   return cnt;
}

int func(int n,int m)
{
    if(n>m)
        return 0;
    int temp=
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<func(n,m)<<endl;
    }
}

