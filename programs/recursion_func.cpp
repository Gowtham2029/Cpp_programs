#include<iostream>

using namespace std;

void fun(int n)
{
    if(n>0)
 {
  // cout<<n<<endl;
   fun(n-1);
    cout<<n<<endl;
 }
}


int main()
{
    fun(5);
    return 0;
}