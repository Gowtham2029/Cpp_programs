#include<iostream>
using namespace std;
int main()
{
    int n, r;
    int rev = 0;
    string s = "";
    for(;n>0;)
    {
       r = n%10;
       n = n/10;
       s = s + r;
    }
    cout<<s;
}