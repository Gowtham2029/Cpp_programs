// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class arr{
    public:
    int a;
    int b;
    int c;
};

bool comp(arr val, arr val1)
{
    if(val.b < val1.b)return true;
    return false;
}

int main() {
    arr v[5];
    for(int i = 0; i<5; i++)
    {
        cin>>v[i].a>>v[i].b>>v[i].c;
    }
    
    sort(v, v+5, comp);
    
    for(int i = 0; i<5; i++)
    {
        cout<<v[i].a<<" "<<v[i].b<<" "<<v[i].c<<endl;
    }
    
 
    
    return 0;
}