#include<iostream>
using namespace std;

class rectangle
{
   private:
      int length;
      int breadth;
   public:
     rectangle(int , int);
     int getlength()
     {
        return length;
     }
    int getbreadth(){return breadth;}
    int area();
    int perimeter();
};
 rectangle::rectangle(int l=0 , int b=0)
 {
    length = l;
    breadth = b;
 }
 int rectangle::area()
 {
   return length*breadth;
 }
 int rectangle::perimeter()
 {
    return 2*(length+breadth);
 }

 int main()
 {
    rectangle r(5,10);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
 }

