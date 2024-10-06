#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[] = {4,1,3,0};
sort(a,a+4);
for(auto x:a)
{
    cout<<x<<" ";
}
}