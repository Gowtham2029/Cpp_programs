#include<iostream>
using namespace std;

class rectangle
{public:
  int length;
  int breadth;
  public:
    int area()
    {
        return length*breadth;
    }  
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r;
    rectangle *p;
    p = &r;
    p->length = 10;
    p->breadth = 20;
    cout<<"area is "<<p->area()<<endl;
    cout<<"perimeter is "<<p->perimeter();
    return 0;
}