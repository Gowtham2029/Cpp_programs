// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
int main() {
    // Write C++ code here
    stack<string>s;
    string name;
    cout<<"enter the name: ";
    cin>>name;
    for(auto x:name)
    {
        s.push(x);
    }
    while(s.size()>0)
    {
        cout<<s.top();
        s.pop();
    }

    return 0;
}