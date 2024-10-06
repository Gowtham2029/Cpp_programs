#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int A[n];
    cout<<"enter array elements: ";
    for(int i = 0; i<n; i++)
      cin>>A[i];
    cout<<"array elements are: ";
    for(int i = 0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}