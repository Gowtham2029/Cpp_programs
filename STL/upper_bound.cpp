// upper_bound: Returns iterator to the 1st greater element in a sorted range.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int>v ={10,20,20,20,30,40};
  auto it = upper_bound(v.begin(), v.end(), 20);

  cout<<*it<<endl;

  it = upper_bound(v.begin(), v.end(), 30);
  cout<<*it<<endl;

  




    return 0;
}