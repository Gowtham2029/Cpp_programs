#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0 || n == 1)return n;  // Base case

    return fib(n-1) + fib(n-2);  // Recursive call

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<fib(n);
}