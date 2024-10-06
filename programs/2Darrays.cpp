#include<iostream>
using namespace std;
int main()
{
    int a[2][3]= {2,4,6,8,9,0};
   for(int i = 1; i<3;i++)
   {
    for(int j = 1; j<4;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}