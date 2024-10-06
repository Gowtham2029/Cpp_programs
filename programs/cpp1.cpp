#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"enter a, b: ";
    cin>>a>>b;
    d =  b*b - 4*a*c;

    if(d ==0)
    cout<<"roots are equal";
     else 
     {
         if( d > 0)
         {
            cout<<"roots are unequal";
         }
         else
          {
          cout<<"imaginary";
           }
     }      
         
    
    
    
    return 0;
}