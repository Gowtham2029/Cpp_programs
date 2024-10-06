#include<bits/stdc++.h>
using namespace std;

void Subsets(string s,int i, int n, string x)
{
   if(i >= 3){
    cout<<x<<endl;
    return;
   }

   // take
   x += s[i];
   Subsets(s, i+1, n, x);
   x = x.erase(x.size()-1);

   // not take
   Subsets(s, i+1, n, x);
}

int main()
{
    string s = "abc";
    string x = "";
    Subsets(s,0, 3, x);
}