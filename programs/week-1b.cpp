/*Write a program which uses function to swap two integers and two float numbers by using
reference variable */

#include<iostream>
using namespace std;

template <class T>
void swap_num(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
   
}

int main()
{
   
 int x, y;
 cin>>x>>y;
  swap_num(x,y);
  cout<<x<<" "<<y<<endl;


  float c,d;
  cin>>c>>d;
  swap_num(c,d);
  cout<<c<<" "<<d<<endl;

   return 0;
}
