#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d = {3,5,6,7};
    d.push_front(2);
    d.push_back(89);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<"size is "<<d.size()<<endl;
    deque<int>::iterator it = d.begin();
    it++;
    d.insert(it, 8);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size is "<<d.size()<<endl;
}