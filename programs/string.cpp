#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"enter your name:";
   // cin>>name;
   getline(cin, name);
    cout<<"welcome mr/mrs: "<<name<<endl;
    return 0;
}