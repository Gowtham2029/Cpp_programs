
#include<iostream>
using namespace std;

int Factorial(int n)
{
    if(n ==1 )return 1;   // Base case

    int x = n*Factorial(n-1);  // Recursive case
    return x;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<Factorial(n);
    return 0;
}