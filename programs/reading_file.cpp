#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ifstream ifg("my.txt");
    int age;
    string name, branch;
    if(ifg)cout<<"file is opened"<<endl;
    ifg>>name>>age>>branch;
    ifg.close();

    cout<<name<<endl;
    cout<<age<<endl;
    cout<<branch<<endl;

    return 0;
}