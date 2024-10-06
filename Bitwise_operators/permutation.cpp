// subsequences of a string

#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;



void filter(int n, string a, vector<string> &v)
{
    int j = 0;
    string str;
    while(n>0)
    {
        int last_bit = (n&1);
        if(last_bit){
           
            str += a[j];
        }
        j++;
        n = n>>1;

    }
    // cout<<endl;
    v.push_back(str);

}

int main()
{
    vector<string>v;
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0; i<(1<<n); i++)
    {
        filter(i, s, v);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++){
       cout<<v[i]<<endl;
    }
    cout<<v.size();
    return 0;
}




// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//          int x = nums.size();
//          int n = 1<<x;
//          vector<vector<int>>v;
        
//          for(int i=0; i<n; i++)
//          {
//              int j = 0;
//               vector<int>p;
//              while(i>0){
//                  int last_bit = i&1;
//                  if(last_bit){
//                     p.push_back(nums[j]);
//                  }
//                  i = i>>1;
//                  j++;
//              }
//              v.push_back(p);
            
//          }
//          return v;
//     }
// };