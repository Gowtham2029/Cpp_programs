#include<iostream>
using namespace std;
int main()
{
    int A[5];
    cout<<"enter array elements: ";
    for(int i = 1; i<5;i++)
    {
        cin>>A[i];

    }
    /*
    cout<<"the elements are: ";
    for(int o = 0; o<5;o++)
    {
        cout<<A[o]<<endl;
    }*/
    for(int i = 0; i<5;i++)
    {
        cout<<A[i]<<endl;

    }

    return 0;
}