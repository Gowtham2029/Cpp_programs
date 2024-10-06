#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator it;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(70);
    v.push_back(20);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"using vector: ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"using iterator: ";
    for(it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"After Using Pop back: "<<endl;
    for(auto x: v){
        cout<<x<<endl;
    }

    cout<<"More methods: "<<endl;
    cout<<v.front()<<endl;  //returns the reference, so you can modify the first value  v.front() = 100;
    cout<<v.back()<<endl;   // returns the reference, yu can modify last value   v.back() = 64;


    auto ite = v.insert(v.begin()+2, 34);
    for(it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
     cout<<endl;
    vector<int>v2;
    v2.insert(v2.begin(), v.begin(), v.end());

    for(auto x:v2){
        cout<<x<<endl;
    }

    cout<<"Some more methods: "<<endl;
    v2.erase(v2.begin()); // removes the element at given position(i.e., v.begin())
    v2.erase(v2.begin(), v2.end()-2); // removes elements from to end-1;
    for(auto x:v2){
        cout<<x<<endl;
    }

    cout<<"checking v2 has elements or not "<<v2.empty()<<endl; // to check vector is empty or not
    v2.clear(); // clears the vector;
    if(v2.empty() == true) cout<<"vector 2 is empty"<<endl;
    else cout<<"V2 is not empty"<<endl;






}