#include<iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total;
    float avg;
    cout<<"enter m1, m2, m3";
    cin>>m1>>m2>>m3;
    total = m1 + m2 + m3;
    avg = (m1+m2+m3)/3;
    if(avg >= 60)
    {
        cout<<"A";
    }
    else if(avg >= 30 && avg < 60)
    {
        cout<<"B";
    }
    else 
    {
        cout<<"C";
    }
    return 0;
}