#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v = {3,5,6,2,78,69};
    
    vector<int>::iterator itr = v.begin();
   // vector<int>::iterator it = v.end();
    sort(v.begin(), v.end());
    for( itr = v.begin(); itr<v.end(); itr++)
    {
        cout<<*itr<<endl;
    }
}