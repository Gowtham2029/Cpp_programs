#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
// int fun(vector<int> &v)
// {
  
  
// }

int main()
{
    vector<int>v = {45,78,12,41,65,33};
    vector<int>::iterator it = v.begin();
    sort(it,v.end());
    for(auto itr = v.rbegin(); itr!=v.rend(); itr++)
    {
       cout<<*itr<<" ";
    }
    
}