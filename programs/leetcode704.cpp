#include<bits/stdc++.h>
using namespace std;


int main()
{
    // Solution s;
    vector<int>v = {-1};
    int target;
    cin>>target;
   auto it = lower_bound(v.begin(),v.end(),target);
   
       int x = it-v.begin();
        if(*it != target)
         {
            cout<<-1<<endl;
         }
       cout<<x;
   return 0;
}