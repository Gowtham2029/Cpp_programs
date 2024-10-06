#include<iostream>
using namespace std;
int main()
{
    int a[] = {8, 9, 6, 3};
    for(auto x:a)
    {
        cout<<++x<<endl;
    }
    return 0;
}
