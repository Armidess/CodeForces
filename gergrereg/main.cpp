#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<vector<int> > B;
    for(int i=0;i<5;i++)
        for(int j=0;j<2;j++)
        B[i][j]=i;
    cout<<B.length();
}
