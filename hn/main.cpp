#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  unsigned long long int fact(unsigned long long int n)
    {
        return (n==1 || n==0) ? 1: n * fact(n - 1);
    }

    int climbStairs(int n)
    {
       int temp=0;
        for(int i=0;i<=n/2;i++)
        {
            temp+=(fact(n-i))/(fact(n-(2*i)) * fact(i));
            cout<<temp<<endl;
        }
            return temp;


    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    s.climbStairs(n);
   // cout<<s.fact(n);

}
