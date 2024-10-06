#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    fstream ofg("my.txt",ios::app);
    ofg<<"gowtham"<<endl;
    ofg<<18<<endl;
    ofg<<"cse"<<endl;
    ofg.close();
    return 0;
}