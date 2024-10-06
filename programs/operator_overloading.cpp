#include<iostream>
using namespace std;

class complex
{
    private:
     int real;
     int img;
    public:
      complex(int x=0, int y=0)
      {
        real = x;
        img = y;
      }
     complex operator +(complex c)
     {
        complex temp;
         temp.real = real + c.real;
         temp.img = img + c.img;
         return temp;
     }
     void display()
    {
         cout<<real<<"+i"<<img<<endl;
    }

};

int main()
{
    complex c1(3,5);
    complex c2(5,8);
    complex c3;
    c3 = c1+c2;
    c3.display();
    return 0;
}
