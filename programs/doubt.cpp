#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
   
    string s = "11111";
    int sum = s.length();
    auto it = count(s.begin(), s.end(), '11');
    
    cout<<*it;
}