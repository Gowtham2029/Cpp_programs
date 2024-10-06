#include<iostream>
#include<vector>
// #include<string>
using namespace std;

string nums[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


void NumtoSpelling(int n)
{
    if(n == 0)
     return;
    
     int dig = n%10;
    NumtoSpelling(n/10);
   

    cout<<nums[dig]<<" ";
    return;
}

int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
   
    NumtoSpelling(n);

    
    return 0;
}