#include<iostream>
using namespace std;

int find(int a[], int key)
{
    int i;
    for(i =0; i<6;i++)
    {
        if(a[i] == key)
        {
           return i; 
        }
    }
    return 0;
}



int main()
{
    int a[] = {0, 1,3,5,6,9};
    int key;
    cout<<"enter key: ";
    cin>>key;
    int d = find(a,key);
    cout<<"found at"<<d;
   return 0;
}