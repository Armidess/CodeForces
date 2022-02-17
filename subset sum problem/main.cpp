#include <bits/stdc++.h>
using namespace std;

bool func(int A[],int total,int n)
{
    bool a[n][total+1];
    for(int i=0;i<n;i++)
        a[i][0]=true;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=total;j++)
        {
            if(i==0)
            {
                if(A[0]==j)
                    a[i][j]=true;
                else
                    a[i][j]=false;
                continue;
            }
            if(A[i]==j)
            {
                a[i][j]=true;
                continue;
            }
            if(A[i]>j)
                a[i][j]=a[i-1][j];
            else
            {
                if(a[i-1][j]==true)
                    a[i][j]=true;
                else
                    a[i][j]=a[i-1][j-A[i]];
            }
        }
    }
    vector<int> sub;
    int j=total;
    for(int i=n-1;j>0;i)
    {
        for(j=total;j>0;j)
        {
            if(a[i-1][j]==true)
                  i--;

            else
            {
                vector<int>:: iterator it=sub.begin();
                sub.insert(it,A[i]);
                j=j-A[i];
                i--;
            }
        }
    }
    for(int i=0;i<sub.size();i++)
        cout<<sub[i]<<"  ";

}

int main()
{
    int n,total;
   // cout<<"Enter N\n";
    cin>>n;
    int A[n];
 //   cout<<"Enter array\n";
    for(int i=0;i<n;i++)
        cin>>A[i];
  //  cout<<"Enter Toatal Value\n";
    cin>>total;
    func(A,total,n);
}
