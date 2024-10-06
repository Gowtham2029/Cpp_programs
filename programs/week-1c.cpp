//Write a program that demonstrates default arguments
#include<iostream>
using namespace std;

string function(string a = "Anupama ", string b = "Parmeswaran")
{
    return a+b;
}

int main()
{
    string x,y;
    getline(cin, x);
    getline(cin,y);
     cout<<function(x,y)<<endl;
     cout<<function(x)<<endl;
    cout<<function()<<endl;
}



