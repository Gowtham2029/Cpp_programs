#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={10,20,30,40,50};
    
    vector<int>::iterator it = v.begin();
    // cout<<next(it)<<endl  ;
    // *it = 70;
     for(it = v.begin(); it<v.end(); it++)
     {
         cout<<*it<<" ";
     }
    // cout<<endl;
    // it = next(it,3);
    // *it = 80;
    // 
//    it = prev(it,2);
//    
    // advance(it,2);
    // *it = 80;
    //  for(it = v.begin(); it<v.end(); it++)
    //   {
     //     cout<<*it<<" ";
    //   }



}