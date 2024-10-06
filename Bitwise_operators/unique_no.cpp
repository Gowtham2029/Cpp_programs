 //Problem - Unique Number 2N + 1

#include<iostream>
using namespace std;


int main() {
// Given a list of numbers where every numbers occurs twice except one, find that unique number

  int n,y, x = 0;
  cin>>n;
  for(int i = 0; i<n; i++)
  {
    cin>>y;
     x ^= y;
  }
 

  cout<<x<<endl;

return 0;

}