#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
   
    vector<int>::iterator it = v.begin();
    v.push_back(40);
   
    v.insert(v.begin()+2,3);
    for(int i = 0; i<v.size(); i++)
     {
         cout<<v[i]<<" ";
     } 
     cout<<endl;
    vector<int>v2 = v;
    for(auto x:v2)
    {
        cout<<x<<" ";
    }
      cout<<endl;
    v2.erase(v2.begin()+2);
    for(auto x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v2.erase(v2.begin(),v2.end()-2);
    for(auto x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v2.clear();
    cout<<v2.size()<<endl;
   cout<<v[2]<<endl;

    
}