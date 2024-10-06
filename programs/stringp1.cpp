// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
    // Write C++ code here
   string s;
   cout<<"enter the string  s: ";
   getline(cin, s);
   string s1;
   
  stack<string>st;
  for(int i = 0; i<s.length(); i++)
  {
    s1 += s[i];
      if(s[i] == ' '||(i == s.length()-1))
      {
          
          st.push(s1);
          s1.clear();
          continue;
      }
    //   else {
         
    //   }
  }
 while(!st.empty())
  {
       cout<<st.top()<<endl;
       st.pop();
    
  }

    return 0;
}