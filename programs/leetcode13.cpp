#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char, int>m;
        map<char, int>::iterator x;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        for(int i = 0; i<s.length(); i++)
        {
               if(m[s[i]]<m[s[i+1]])
               {
                   sum = sum + (m[s[i+1]] - m[s[i]]);
                   i++;
                   cout<<"sum: "<<sum<<endl;
               }
               else if(m[s[i]])
               {
                  sum = sum+(m[s[i]]);
               } 
            
        }
        return sum;
    }
};

int main()
{
      string str = "MCMXCIV";
      Solution k;
      int x = k.romanToInt(str);
      cout<<x<<" ";
      return 0;
}