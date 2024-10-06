#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int>p = {10,20};
    pair<int, string> p1 = {30,"hero"};
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}