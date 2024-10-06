#include<bits/stdc++.h>
using namespace std;

class fun
{
    public:
    void add()
    {
       cout<<"this is default function"<<endl;
    }

    void add(int x, int y)
    {
        cout<<"sum of integers: "<<(x+y)<<endl;
    }

    void add(double x, double y)
    {
        cout<<"sum of floats: "<<(x+y)<<endl;
    }
    
};

int main()
{
    fun f;
    f.add();
    f.add(5,4);
    f.add(5.5, 4.5);
    return 0;
}