#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount)
{
    if(amount==0)
        return 0;
    int A[coins.size()][amount+1];
    for(int i=0;i<coins.size();i++)
        A[i][0]=0;
    for(int i=0;i<coins.size();i++)
    {
        for(int j=1;j<=amount;j++)
        {
            if(i==0)
                if(j%coins[i]==0)
                {
                    A[i][j]=j/coins[i];
                    continue;
                }
                else
                {
                    A[i][j]=0;
                    continue;
                }

            if(j==coins[i])
            {
                A[i][j]=1;
                continue;
            }
            if(j>coins[i] && A[i][j-coins[i]]!=0)
            {
                int t1=1+A[i][j-coins[i]];
                int t2=A[i-1][j];
                if(t1==0){
                    A[i][j]=t2;
                    continue;
                }
                if(t2==0){
                    A[i][j]=t1;
                    continue;
                }
                A[i][j]=min(t1,t2);
                continue;
            }
            else
                A[i][j]=A[i-1][j];
        }
    }
    int j=amount;
    vector<int> coin;
    for(int i=coins.size()-1;j>0;i)
    {
        for(j=amount;j>0;j)
        {

            if(A[i][j]<A[i-1][j] || i==0)
            {
                vector<int>:: iterator it=coin.begin();
                coin.insert(it,coins[i]);
                j=j-coins[i];
                continue;
            }
            else
                i--;

        }
    }
    for(int i=0;i<coin.size();i++)
            cout<<coin[i]<<"  ";
    cout<<endl;

    if(A[coins.size()-1][amount]==0)
        return -1;
    return A[coins.size()-1][amount];
}

int main()
{
    int n,amount;
    cin>>n;
    vector<int> coins(n);
    for(int i=0;i<n;i++)
        cin>>coins[i];
    cin>>amount;
   cout<<coinChange(coins,amount);
}
