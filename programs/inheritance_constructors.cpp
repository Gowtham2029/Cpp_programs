#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"default base"<<endl;

    }
    base(int x)
    {
        cout<<"base is "<<x<<endl;
    }
};

class derived : public base
{
    public:
   derived()
   {
     cout<<"default derived"<<endl;
   } 
   derived(int a)
   {
    cout<<"derived is "<<a<<endl;
   }
   derived(int b, int c) : base(c)
   {
    cout<<"derived is "<<c;
   }
};

int main()
{
    derived d;
    cout<<endl;
    derived e(10);
    cout<<endl;
    derived f(10,20);
    return 0;
}