#include<iostream>
using namespace std;

class unary
{
    public:
    int a,b,c;
    unary(int x = 0,int y = 0, int z = 0)
    {
        a = x;
        b = y;
        c = z;
    }
    void print()
    {
        cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
    }
};


unary operator++(unary &u)
    {
        u.a++;
        u.b++;
        u.c++;
        return u;
    }

int main()
{
    unary u(4,5,6);
    unary c = ++u;
    c.print();
    return 0;
}