#include<iostream>
using namespace std;

class traingle
{
 public:
    int height;
    int base;

    int area()
    {
        int area = 0.5*height*base;
        return area;
    }
};

int main()
{
    traingle t1,t2;
    t1.height = 10;
    t1.base = 20;
    cout<<"area of t1 "<<t1.area()<<endl;
     t2.height = 100;
    t2.base = 50;
    cout<<"area of t2 "<<t2.area()<<endl;
    return 0;

}

