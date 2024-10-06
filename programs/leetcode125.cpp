// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<ctype.h>
using namespace std;
int main() {
    // Write C++ code here
  string s = "A man, a plan, a canal: Panama";
  string c = "";
  for(auto x:s)
  {
    if(isalpha(x))
    {
        
        c += (char)tolower(x);
    }
  }
  cout<<c<<endl;
      string y = c;
      cout<<y<<endl;
        reverse(c.begin(),c.end());
        cout<<c<<endl;
        if(c == y)cout<<"this is palindrome"<<endl;
        else cout<<"Not a palindrome"<<endl;
         return 0;
}
