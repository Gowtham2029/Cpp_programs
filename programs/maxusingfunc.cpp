#include<iostream>
using namespace std;

int max(int a, int b, int c)
{
    if(a>b && a > c)
     return a;
    else if(b>a && b>c)
     return b;
    else return c;
}

int main()
{
    int a, b, c, d;
    cout<<"enter a,b,c: ";
    cin>>a>>b>>c;
    d = max(a,b,c);
    cout<<"maximum is "<<d<<endl;
    return 0;
}