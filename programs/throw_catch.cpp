#include<iostream>
using namespace std;

int division(int x, int y)
{
    if(y == 0)
       throw string("isiri bengav bro");
    else
      return (x/y);   
}

int main()
{
    int a,b,c;
    cout<<"enter a and b: ";
    cin>>a>>b;
    try
    {
        c = division(a,b);
        cout<<c<<endl;
    }
    catch(string e)
    {
        cout<<"zero-division Error"<<e<<endl;
    }
    cout<<"super ra nv iyina happy ga undu";
}