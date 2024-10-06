#include<iostream>
using namespace std;

int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}

int main()
{
    int a= 10, b = 20;
    int c;
     c = swap(a,b);
     cout<<c<<endl;

     return 0;
}