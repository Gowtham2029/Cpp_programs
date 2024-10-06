#include<iostream>
#include<deque>
using namespace std;

int main()
{
   deque<int> dq = {1,4,6};
   dq.push_back(10);
   dq.push_front(21);
   for(auto x: dq){
    cout<<x<<" ";
   }
   cout<<endl;

   cout<<dq.front()<<endl;
   cout<<dq.back()<<endl;

   cout<<"size is: "<<dq.size()<<endl;

   auto it = dq.begin();
   it++;
   dq.insert(dq.end()-1, 45);

   for(auto i = dq.begin(); i != dq.end(); i++)
   {
    cout<<*i<<" ";
   }
   cout<<endl;

 dq.pop_front();
dq.pop_back();

}

