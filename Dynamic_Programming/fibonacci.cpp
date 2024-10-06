#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if(n <= 1)return n;

    if(dp[n] != -1)return dp[n];  // checking if precomputed or not

    dp[n] = fib(n-1, dp) + fib(n-2, dp);  // storing in the vector
    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    vector<int>v(n+1, -1);   // declaration
    cout<<fib(n, v)<<endl;
}