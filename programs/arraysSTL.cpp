#include<iostream>
#include<array>
using namespace std;

int main()
{
    //int a[4] = {1,3,5,7};
    array<int,4> a = {1,4,5};
    int b = a.size();
    for(int i = 0; i<b; i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<endl;
    cout<<"the array element at index 2 is "<<a.at(2)<<endl;

    cout<<"first element si "<<a.front()<<endl;
    cout<<"last element si "<<a.back()<<endl;

   
}