#include <bits/stdc++.h>
using namespace std;

vector<char> substring(string s1,string s2)
{
    int A[s1.size()+1][s2.size()+1];
    vector<char> s;

    for(int i=0;i<=s1.size();i++)
            for(int j=0;j<=s2.size();j++)
                A[i][j]=0;

    for(int i=1;i<=s1.size();i++)
        for(int j=1;j<=s2.size();j++)
        {
            if(s1[i]==s2[j])
            {
                A[i][j]=A[i-1][j-1]+1;
            }
            else
            {
                A[i][j]=max(A[i][j-1],A[i-1][j]);
            }
        }
    int j=s2.size();
    for(int i=s1.size();i>0 && j>0;i)
     {
        for(j=s2.size();j>0 && i>0;j--)
        {
            if(A[i][j]>A[i-1][j] && A[i][j]>A[i][j-1])
            {
                i--;
                vector<char>:: iterator it=s.begin();
                s.insert(it,s1[i]);
                continue;
            }
            if(A[i][j]==A[i][j-1])
                continue;
            if(A[i][j]>A[i][j-1] && A[i][j]==A[i-1][j])
            {
                i--;
                j++;
            }
        }
     }
     return s;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    vector<char> s=substring(s2,s1);
    for(int i=0;i<s.size();i++)
        cout<<s[i];


}
