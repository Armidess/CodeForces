#include <bits/stdc++.h>
using namespace std;

int func(string a,string b)
{
    int A[a.length()+1][b.length()+1];
    A[0][0]=0;
    for(int i=1;i<=a.length();i++)
        A[i][0]=i;
    for(int i=1;i<=b.length();i++)
        A[0][i]=i;
    for(int i=1;i<=a.length();i++)
    {
        for(int j=1;j<=b.length();j++)
        {
            if(a[i-1]==b[j-1])
                A[i][j]=A[i-1][j-1];
            else
                A[i][j]=min(A[i-1][j]+1,A[i][j-1]+1);
        }
    }
    for(int i=0;i<=a.length();i++)
    {
        for(int j=0;j<=b.length();j++)
            cout<<A[i][j]<<"  ";
        cout<<endl;
    }




    cout<<A[a.length()][b.length()]<<endl;
  //  return A[a.length()][b.length()];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        func(b,a);
    }

}
