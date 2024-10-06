#include<iostream>
using namespace std;

int max(int a, int b, int c = 0)
{
    if(a>b && a>c)
    {
      return a;
    }
    else if(b>a && b>c)
    {
        return b;
    } 
    else return c;
}

int main()
    {
        int a, b, c;
         cout<<"enter a, b, c : ";
         cin>>a>>b>>c;
         cout<<"maximum is: "<<max(a,b,c)<<endl;

         return 0;

    }
