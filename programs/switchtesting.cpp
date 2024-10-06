#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"enter day num: ";
    cin>>a;
    switch(a)
    {
        case 'b' : cout<<"mon";
        break;
        case 'c' : cout<<"tue";
        break;
        case 'd' : cout<<"wed";
        break;
        case 'e' : cout<<"thu";
        break;
        case 'f' : cout<<"fri";
        break;
        case 'g' : cout<<"sat";
        break;
        case 'h' : cout<<"sun";
        break;

       default : cout<<"invalid day";

    }

    return 0;
}

    
