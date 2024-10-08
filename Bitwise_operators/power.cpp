// power of a and b i.e., a^b

#include<iostream>
using namespace std;

int power_optimised(int a, int n)
{
    int ans = 1;
    while(n > 0)
    {
        int last_bit = (n&1);
        if(last_bit)
        {
            ans = ans*a;
        }
        a = a*a;
        n = n>>1;

    }
    return ans;
}

int main()
{
  int a, n;
  cin>>a>>n;
  cout<<power_optimised(a, n);
}