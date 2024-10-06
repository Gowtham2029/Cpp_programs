// rotate() : used to rotate a given container around the given point.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>v = {10,20,20,40,507};
  //rotate(start || a point to rotate through || end ) 
    rotate(v.begin(), v.begin()+3, v.end());

    for(auto x: v)
    {
        cout<<x<<" ";
    }
}