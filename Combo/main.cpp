#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream a;
    fstream b;
    string s,s1="";
    a.open("1.txt");
    b.open("2.txt",ios::out);
    while(getline(a,s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                break;
            }
            s1+=s[i];
        }
        b <<s1 << endl;
        s1="";
    }
}
