#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int>c;
        for(auto x:s)
        {
           c.insert(x);
        }
        string str="";
        for(auto x:c)
        {
            str += x;
        }
        cout<<str<<endl;
        if(s.find(str))
        {
           cout<<"the length is "<<str.length();
        }
        for(int i = 0; i<str.length(); i++)
        {
           if(s.find(str.substr(i))){
               int t = str.length()-i+1;
               return t;
           }
        }
        return 1;
    }
};

int main()
{
    Solution s;
    int x = s.lengthOfLongestSubstring("pwwkew");
    cout<<x<<endl;
}