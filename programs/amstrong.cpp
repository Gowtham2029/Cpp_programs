#include<iostream>
using namespace std;
int main()
{
    int n, r, i, sum = 0;
    cout<<"enter n: ";
    cin>>n;
    i = n;
    for(;n>0;)
    {
     r = n%10;
     n = n/10;
     sum = sum + (r*r*r);
    }
    if(i == sum)
    cout<<"amstrong number";
    else
    cout<<"not amstrong number";
    return 0;
    
}