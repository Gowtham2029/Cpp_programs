#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[3] = {5,7,8};
    vector<int> v = {3,5,6,7,8};
    int x;
    vector<int> last(v);

    for(int i:last)
    {
        cout<<i<<" ";
    }
    // vector<int>::iterator it;
    // for(it = v.begin()+1; it!=v.begin()+4; it++)
    // {
    //     cout<<(*it)<<" ";
    // }
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"index at 3: "<<v.at(3)<<endl;

    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;

    // v.push_back(8);

    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v.pop_back();
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // for(int i = 0; i<3; i++)
    // {
    //     cin>>x;
    //     v.push_back(x);
    // }
    // cout<<v.size()<<endl;
    // for(int i=0; i<v.size(); i++)
    //  {
    //      cout<<v[i]<<" ";
    //  }
    //  cout<<endl;



   




    
}