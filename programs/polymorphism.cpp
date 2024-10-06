#include<iostream>
using namespace std;

class car
{
    public:
     virtual void display() = 0;
   /*     {
            cout<<"car is started";
        }*/
    };

class innova : public car
{
    public:
    void display()
    {
        cout<<"innova is started";
    }
};

class benz:public car
{
    public :
    void display()
    {
      cout<<"benz is started";
    }
};

int main()
{
    car *p = new innova();
    p->display();
    cout<<endl;
    p = new benz();
    p->display();

}