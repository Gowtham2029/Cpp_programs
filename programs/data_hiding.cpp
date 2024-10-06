#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public :
     int setlength(int l)
     {
        
        if(length >= 0)
        {
            length = l;
            
        }
     }
     int setbreadth(int b)
     {
        
        if(breadth >= 0)
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
    rectangle r;
    r.setbreadth(5);
    r.setlength(10);
   cout<<"length is "<< r.getlength()<<endl;
   cout<< "breadth is "<<r.getbreadth()<<endl;
    cout<<"area is "<<r.area()<<endl;
    return 0;
}












