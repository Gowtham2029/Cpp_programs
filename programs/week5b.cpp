#include<iostream>
using namespace std;

class hero
{
    public:
    virtual void fun()
    {
        cout<<"Gowtham kishore"<<endl;
    }
};
class heroine:public hero{
    public:
    void fun()
    {
        cout<<"Anupama parmeswaran is mine(Gowtham kishore)"<<endl;
    }
};

int main()
{
   hero *h;
   heroine obj;
   h = &obj;
   h->fun();
}    