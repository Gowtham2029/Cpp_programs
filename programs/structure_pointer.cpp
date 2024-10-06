#include<iostream>
using namespace std;

struct test
{
    int a;
    int b;
};

int main()
{
    test t = {10, 20};
    test *ptr = &t;
    cout<<ptr->a<<endl;
    ptr->b = 50;
    cout<<ptr->b<<endl;
    cout<<t.b<<" ";    
    cout<<t.a;
    return 0;
    
}