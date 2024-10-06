#include<iostream>
using namespace std;
 
class rectangle
{
  private :
   int length;
   int breadth;

 public :
  rectangle(int l = 0, int b = 0)
  {
    setlength(l);
    setbreadth(b);
  }
 int setlength(int l)
 {
   length = l;
 }
  int setbreadth(int b)
  {
    breadth = b;
  }
  int getlength()
  {
    return length;
  }
  int getbreadth()
  {
    return breadth;
  }
  int area()
  {
    return length*breadth;
  }
};

int main()
{
    rectangle r(5,10);
  cout<<r.area()<<endl;
  cout<<r.getlength()<<endl;
  cout<<r.getbreadth()<<endl;
 
  return 0;

}  
