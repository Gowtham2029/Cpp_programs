#include<iostream>
using namespace std;
int main()
{
    string s,x,y;
    cout<<"enter the string: ";
    cin>>s;
    cout<<"enter the substring: ";
    cin>>x;
    cout<<"concatstring: ";
    cin>>y;
    s = s+y;
    cout<<"the string: "<<s<<endl;
    int res = s.find(x,4);
    if(res == string::npos)
      cout<<"not present "<<res<<endl;
    else
      cout<<"present "<<res<<endl;
    cout<<s.substr(5)<<endl;
    cout<<s.substr(5,9);
    return 0;
}