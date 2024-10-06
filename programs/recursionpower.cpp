#include<iostream>
using namespace std;

int fun(int a)
{
    if(a == 1)
    {
        return 2;
    }
    return fun(a-1)*2;
}

int main()
{
    int a,n;
    cout<<"enter the power of 2: ";
    cin>>a;
    n = fun(a);
    cout<<"2 power "<<a<<" is "<<n;

}