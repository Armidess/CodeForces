#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int func(int m,vector<vector<int>> A)
{

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<vector<int>> A;
        for(int i=0;i<2;i++)
            for(int j=0;i<m;j++)
            {
                int temp;
                cin>>temp;
                A[i].push_back(temp);
            }
        cout<<func(m,A)<<endl;
    }
}
