#include<iostream>
using namespace std;

class rectangle
{
    public :
       void fun1()
       {
        cout<<"area of rectangle"<<endl;
       }
};

class cuboid : public rectangle
{
    public:
     void fun2()
     {
        cout<<"volume of rectangle"<<endl;
     }
};

int main()
{
   // derived d;
     rectangle *p;
    p = new cuboid();
   p->fun1();
   
   // d.g();
   // d.h();
    return 0;
}