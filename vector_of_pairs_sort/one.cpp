// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int, pair<int, int>>&p1, pair<int, pair<int, int>>&p2)
{
    if(p1.second.second < p2.second.second)return true;
    return false;
}

int main() {
    vector<pair<int, pair<int,int>>>v;
    
    v.push_back({1, {5, 4}});
    v.push_back({2, {4, 54}});
    v.push_back({3, {4, 67}});
    v.push_back({4, {43, 98}});
    v.push_back({5, {23, 41}});
    
     sort(v.begin(), v.end(), comp);
    
    for(auto it: v)
    {
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    }
    
 
    
    return 0;
}