#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
   forward_list<int>l = {23,5,6,12};
   l.push_front(32);
   l.push_front(54);
   for(auto x: l)
   {
     cout<<x<<" ";
   }
   cout<<endl;
   l.pop_front();
//    l.pop_front();
   for(auto x: l)
   {
     cout<<x<<" ";
   }
   cout<<endl;
   l.clear();
   l.assign({34,143,67,89,143});
   l.remove(143);
   l.push_front(12);
   for(auto x: l)
   {
     cout<<x<<" ";
   }
   cout<<endl;
   
   l.reverse();
   for(auto x: l)
   {
     cout<<x<<" ";
   }
   cout<<"\n";
   l.sort();
    for(auto x: l)
   {
     cout<<x<<" ";
   }

}