#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;  // by default ascending order
    s.insert(10);
    s.insert(8);
    s.insert(78);
    s.insert(60);

    for(auto x: s){
        cout<<x<<" ";
    }
    cout<<endl;

    set<int, greater<int>> s1; 
    s1.insert(10);
    s1.insert(8);
    s1.insert(78);
    s1.insert(60);

    for(auto x: s1){
        cout<<x<<" ";
    }
    cout<<endl;


    s.insert(10);  // inserting duplicates
    s.insert(60);  // inserting duplicates
      for(auto x: s){
        cout<<x<<" ";
    }
    cout<<endl;

    s.insert({89,90});
     for(auto x: s){
        cout<<x<<" ";
    }
    cout<<endl;
}