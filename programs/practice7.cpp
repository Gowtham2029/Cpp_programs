#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v = {3,1,2};
    vector<int>::iterator it = v.begin();
    for( it = v.begin(); it<v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<char>c = {'g','e','k'};
   
    pair<int,char>p[v.size()];
    for(int i = 0; i<v.size(); i++)
    {
       p[i] = {v[i],c[i]};
    }
    
    sort(p ,p+v.size());
    

      for(int i = 0; i<v.size(); i++)
      {
         cout<<p[i].first<<" "<<p[i].second<<endl;
      }
}

















   


