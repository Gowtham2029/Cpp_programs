// count number of set bits(one's) in the number

#include <iostream>
using namespace std;

// First Method
// **************
// Time Complexity: for a given number N, at max no. of bits are O(logN)+1.
int countBits(int n)
{
    int ans = 0;
    while(n > 0)
    {
        ans += (n & 1);  
        n = n >> 1;
    }
    return ans;
}

// Second Method -- Efficient than 1st Method.
// ********************************************
// Time complexity: O(no. of set bits)

int countBitsFast(int n)
{
    int ans = 0;
    while(n > 0){
        n = n & (n-1); // Removes the leading bit(least-significant bit) for every iteration. || removes bits from right to left.
        ans ++;
    }
    return ans;
}


// Third Method: Built in methods
//1. __builtin_popcount(number)



int main()
{
  int n;
  cout<<"Enter number: ";
  cin >> n;
  
  cout<<countBits(n)<<"\n";
  cout<<countBitsFast(n)<<"\n";
  int x = __builtin_popcount(15);
   cout<<x;

  return 0;
}