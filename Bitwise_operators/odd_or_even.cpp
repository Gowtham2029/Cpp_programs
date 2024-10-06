// odd or even number using bitwise

#include <iostream>
using namespace std;

bool isOdd(int n)
{
    return (n&1);
}

int getBit(int &n, int &i)
{
    int mask = 1<<i;
    return (n & mask)>0;
    
}

int setBit(int &n, int &i)
{
    int mask = 1<<i;
    return (n | mask);
}

int clearBit(int &n, int i)
{
    int mask = ~(1<<i);
    return (n & mask); 
}

void updateBit(int &n, int i, int v)
{
    int mask = ~(1<<i);
    int cleared_n = (n & mask);
    n = cleared_n | (v << i);
   
}

int clearLastIbits(int &n, int i)
{
    int mask = (~0) << i;
    return (n & mask);
}

int clearRangeItoJ(int &n, int i, int j)
{
    int a = (~0)<<(j+1);      // 111111100000000
    int b = (1<<  i) - 1;  // 2^i - 1 == 000111111111
    int mask = a | b;
    return (n & mask);
}

int main()
{
    int n, i;
    cin>>n;
    cin>>i;
    // cout<<isOdd(n);

    // cout<<getBit(n, i);

    cout<<setBit(n, i);



    return 0;
}