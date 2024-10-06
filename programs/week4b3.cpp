#include<iostream>
using namespace std;

class base
{public:
    virtual void fun()
    {
        cout<<"this is base class"<<endl;
    }
};

class derived: public base
{public:
   void fun()
   {
     cout<<"this is derived class"<<endl;
   }
};

int main()
{
    base b;
    b.fun();
    derived d;
    d.fun();
}