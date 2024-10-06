#include<iostream>
using namespace std;

class hero
{
    public:
 virtual   void display()
    {
        cout<<"hero is ram";
    }
};

class gowtham : public hero
{
   public :
   void display()
   {
    cout<<"gowtham is ram fan";
   }
};

int main()
{   
     gowtham d;
    hero *g;
     g = &d;
    g->display();
    return 0;
}