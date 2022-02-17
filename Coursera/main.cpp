#include<iostream>
#include<vector>

using namespace std;

const int N=40;
template<typename T>
int sum(T val)

{


         int s=0;
         for (int i=0; i< val.size();++i)
         s +=val[i];
         return s;

}

int main()
{
           int i,n;

         vector<int>vec;

         for(i=0; i<n;++i);
             vec.push_back(i);

          cout<<"sum is "<<sum(vec)<<'\n';
         return 0;
}
