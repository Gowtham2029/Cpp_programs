
#include<iostream>
using namespace std;

int occ(int *a, int n, int key, int i)
{
    // cout<<"size is: "<<n<<endl;
    // cout<<"i: "<<i<<" a[i]: "<<a[i]<<" key: "<<key<<endl;
    if(a[i] == key)
           return i;
    if(i > n-1)
           return -1;
    occ(a, n, key, i+1);
}

int firstOcc(int *a, int n, int key)
{
    int i = 0;
    cout<<occ(a, n, key, i);

}

int Method(int *a, int n, int key)
{
    if(n == 0)return -1;

    if(a[0] == key)return 0;

    int i = Method(a+1, n-1, key);
    if(i == -1)return -1;
    return i+1;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5, 4, 6, 8, 10};
    int key = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array: "<<size<<endl;
    cout<<Method(arr,size,key);
    // firstOcc(arr, size, key);

}