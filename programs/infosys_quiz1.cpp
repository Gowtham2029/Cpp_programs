#include<iostream>
using namespace std;

int main()
{
  int N = 7531;
  int r[4];
//   cout<<"Input: ";
//   cin>>N;
  int t = N;
  for(int i=0;N>0;i++)
  {
    r[i] = N%10;
    N = N/10;
  }
  for(int i = 0; t>0; i++ )
  {
    cout<<r[i]<<" ";
    t = t/10;
  }
  
}